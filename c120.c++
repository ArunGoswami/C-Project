#include<iostream>
using namespace std;
int main(){
    int i=2;
    int *p=&i;
    *p=*p+1;
    cout<<*p<<endl;
    p=p+1;
}