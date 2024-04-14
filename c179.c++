#include <iostream>
using namespace std;

class A
{
    public:
    void func(){
        cout<<"function 1 "<<endl;
    }
};
class B
{
    public:
    void func(){
        cout<<"function 2 "<<endl;
    }
};
class C:public A,public B
{


};
int main(){
   C obj;
   obj.A::func();
   obj.B::func();
};