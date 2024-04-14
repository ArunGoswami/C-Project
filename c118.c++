#include<iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    int *p=&a;

    cout<<"the value of adderse "<<*p<<endl;
    a++;
    cout<<"the value of "<<p<<endl;
   
   cout<<"before"<<p<<endl;
   (*p)++;
   cout<<"after "<<*p<<endl;

   int *q=p;
   cout<<p<<" copy"<<q<<endl;
   cout<<*p<<" copied "<<*q<<endl;
    return 0;
}