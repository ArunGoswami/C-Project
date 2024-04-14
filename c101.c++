#include<iostream>
#include<algorithm>
#include<string>
void replacezero(string &s){
s temp=" ";
for(int i=0; i<s.length(); i++){
    if(s[i]==' '){
        temp.push_back('@');
           temp.push_back('4');
              temp.push_back('0');
    }
    temp.push_back(s[i];)
}
s=temp;
}
int main(){
    string s;
    cin>>s;
    replacezero(s);
    cout<<replacezero<<endl;
    return 0;
}