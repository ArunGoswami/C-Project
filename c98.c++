#include<iostream>
#include <algorithm>
#include <string>

using namespace std;
char reverseWords(string & s)
{
    reverse(s.begin(),s.end());

    int start =0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            reverse(s.begin() + start , s.begin() + i);
            start = i+ 1;
        }
    }
    reverse(s.begin() + start , s.end());
}
int main(){
    string s = "hello shera world";
    reverseWords(s);
    cout<<s<<endl;
}