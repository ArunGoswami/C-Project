#include<iostream>
using namespace std;
// class A
// {
//    public:
//    void sayhello(){
//     cout<<"hello"<<endl;
//    }
//    int sayhello(string name, int n){
//     cout<<"hello 3"<<endl;
//    }
//    void sayhello(string name){
//     cout<<"hello 2"<<endl;
//    }
// };
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output "<<value2-value1<<endl;
    }
};
int main(){
    // A obj;
    // obj.sayhello();
    // obj.sayhello();

B obj1,obj2;
obj1.a=4;
obj2.b=7;
obj1+obj2;

    return 0;
}