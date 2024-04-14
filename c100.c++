#include <iostream>
using namespace std;

char getmaximumcharacter(string s){
    int arr[26]= {0};
    for(int i=0; i<s.length(); i++)
    {
        int num=0;
        if(s[i]>='a' && s[i]<= 'z')
        {
            num=s[i]-'a';
        }
        else if (s[i]>='A' && s[i]<='Z')
        {
            num = s[i] -'A';
        }
        arr[num]++;
    }
    int maxi = -1;
    int ans=0;
    for (int i = 0; i <26; i++)
    {
       if(maxi<arr[i])
       {
        maxi=i;
        maxi=arr[i];
       }
    }
    char finalans='a'+ans;
    return finalans;
}   
int main()
{
    string s;
    cin>>s;
    cout<<getmaximumcharacter(s)<<endl;
    return 0;
}