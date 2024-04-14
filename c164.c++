#include<iostream>
using namespace std;
class hero{
    public:
    char name[100];
     int health;
     int level;
};
int main(){
     hero h1;
     cout<<"size  "<<sizeof(h1)<<endl;
       cout<<"size  "<<h1.health<<endl;
}