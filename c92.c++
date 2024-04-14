 #include <iostream>
using namespace std;
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
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
      while (s<e)
      {
        swap(name[s++],name[e--]);
      }
}

int getlength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[10];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
    int len=getlength(name);
    cout<<"length"<<len<<endl;
    reverse(name,len);
    cout<<name<<endl;
    return 0;
}
