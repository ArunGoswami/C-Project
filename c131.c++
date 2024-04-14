#include<iostream>
using namespace std;

//#define pi=3.14;

//int main(){
    // int r=5;
    // double area=3.14*r*r;
    // cout<<"Area is "<<area<<endl;
int score =15;
void a(int & i){
    cout<<score<<"ia a"<<endl;
    score++;
    char ch ='a';
    cout<<i<<endl;
}
void b(int & i){
    cout<<score<<"is a"<<endl;
    cout<<i<<endl;
}
void c(int& i){
    cout<<score<<"is a"<<endl;
    cout<<i<<endl;
}
int main(){
    cout<<score<<"is main "<<endl;
    int i=5;
    return 0;
}