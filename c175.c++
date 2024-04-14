#include<iostream>
using namespace std;
class human
{
  public:
     int age;
     int weight;
     int heigth;

  public:
    int getset(){
        return this-> age;
    }   
    void setweight(int w){
        this->weight = w;
    }
};
class male:public human
{
      string name;
      void sleep(){
      cout<<"sleep"<<endl;
      }
};
int main(){
     male object;
    cout<<object.age<<endl;
   cout<<object.weight<<endl;
   cout<<object.heigth<<endl; 
   object.setweight(75);
   cout<<object.weight<<endl;
}