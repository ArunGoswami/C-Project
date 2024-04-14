#include<iostream>
using namespace std;

// Function to reverse a string
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
}

// Function to get length of a string
int getlength(char name[])
{
    int count=0;
    for(int i=0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}

// Main function
int main()
{
    char name[10];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Your name is: "<<endl;
    cout<<name<<endl;
    int len=getlength(name);
    cout<<"Length: "<<len<<endl;

    reverse(name,len);
    cout<<"Reversed name: "<<name<<endl;

    return 0;
}
