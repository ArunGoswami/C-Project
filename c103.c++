#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void replacezero(string & s)
{
    string temp=" ";
    for(int i=0; i<s.length() ;i++)
    {
        if(s[i] == ' ')
        {
          temp.push_back('@'); 
           temp.push_back('@'); 
            temp.push_back('@'); 
        }
        temp.push_back(s[i]);
    }
}


int main()
{
   string s;
   cin>> s;
   cout<<s<<endl;
   return 0;
}