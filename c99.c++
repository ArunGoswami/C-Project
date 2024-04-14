#include <iostream>
using namespace std;

char getmaximumcharacter(string s){
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        int number=0;
        if(s[i]>='a' && s[i]<='z'){
            number=s[i]-'a'; // Subtract 'a' instead of storing the ASCII value of s[i]
        }
        else if (s[i]>='A' && s[i]<='Z') // Add an "else if" statement to handle uppercase letters
        {
            number=s[i]-'A';
        }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}

int main(){
    string s;
    cin>>s;
    cout<<getmaximumcharacter(s)<<endl;
    return 0;
}
