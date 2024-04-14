#include<iostream>
using namespace std;

    // int r=5; 
    // double pi=3.14;
    // double area=3.14*r*r;
    // cout<<"area is "<<area<<endl;

int score=15;
void a(int & i){
    cout<<score<<"in a"<<endl;
    score++;
    char ch ='a';

    cout<<i<<endl;
}
void b(int & i){
    cout<<score<<"is a"<<endl;
    cout<<i<<endl;
}
int main(){
int i=5;
cout<<score<<" is main"<<endl;
return 0;
}

