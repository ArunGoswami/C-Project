#include<iostream>
using namespace std;
class sumit{

private:
int health;
public:
char level;
int gethealth(){
    return health;
}
char getlevel(){
    return level;
}
void sethealth(int h){
    health = h;
}
void setlevel(char ch){
    level = ch;
}

};
int main(){
    sumit shera;
    shera.sethealth(12);
    shera.level = 'a';
    cout<< "health is    "<<shera.gethealth()<<endl; 
    cout<<" level is     "<< shera.level<<endl;
}