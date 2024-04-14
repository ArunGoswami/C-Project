#include<iostream>
using namespace std;
#include<cstring>
class sumit{

private:
int health;
 
public:
char *name;
char level;
static int timetocompelet;
sumit(){
    cout<<"constructor called  "<<endl;
    name = new char[100];
}
sumit(int health, char level){
    this->level = level;
    this->health = health;
}
sumit(sumit& temp){
    cout << "copy constructor called "<<endl;
     this-> name = temp.name;
     this->health = temp.health;
     this->level =temp.level;
}
void print(){
   // cout<<level<<endl;
   cout<<"name "<<this->name<<" ";
    cout<<"health "<<this->health<<endl;
    cout<<"level "<< this->level<<endl;
    cout<<endl;
}
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
void setname(char name[]){
    strcpy(this->name, name);
}
static int random(){
    cout<<timetocompelet<<endl;
}
~sumit(){
   cout<<"destructor called "<<endl;
}

};
int sumit:: timetocompelet = 5;
int main(){
     cout<<sumit:: timetocompelet<<endl;
     sumit N;
     cout<<N.timetocompelet<<endl;
   // cout<<sumit:: random()<<endl;

}