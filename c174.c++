#include<iostream>
using namespace std;
class human{
    public:
    int age;
    int height;
    int health;
    int weight;

public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
      this->weight =w;
    }
};
        class male: public human{
            public:
            string name;
            void sleep(){
        cout<<"sleep"<<endl;
            }
        };
        

    int main(){
        male object1;
        cout<<object1.age<<endl;
             cout<<object1.weight<<endl;
                  cout<<object1.height<<endl;
            object1.setweight(90);   
            cout<<object1.weight<<endl;   
    }
