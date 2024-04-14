#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    *p=*p+1;
    cout<<*p<<endl;
    p=p+1;
}