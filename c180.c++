#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello "<<endl;
    }
int sayhello(string name,int n){
    cout<<"hello"<<endl;
}
    void sayhello(string name){
        cout<<"hello "<<endl;
    }
};
int main(){
    A obj;
    obj.sayhello();

}
