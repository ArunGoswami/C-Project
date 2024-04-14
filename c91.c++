#include <iostream>

char tolowercase(char c){
    if(c >= 'A' && c <= 'Z'){
        return c - 'A' + 'a';
    } else {
        return c;
    }
}

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n - 1;
    while(s <= e){
        if(tolowercase(name[s]) != tolowercase(name[e])){
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n - 1;
    while (s < e) {
        std::swap(name[s++], name[e--]);
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "Your name is: " << std::endl;
    std::cout << name << std::endl;
    int len = getlength(name);
    std::cout << "Length: " << len << std::endl;

    reverse(name, len);
    std::cout << "Reversed name: " << name << std::endl;
    std::cout << "Palindrome: " << checkPalindrome(name, len) << std::endl;
    std::cout << "Character is: " << tolowercase('B') << std::endl;
    std::cout << "Character is: " << tolowercase('c') << std::endl;
    return 0;
}

