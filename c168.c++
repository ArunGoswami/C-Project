#include<iostream>
using namespace std;
#include<cstring>
class sumit{

private:
int health;
 
public:
char *name;
char level;
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

};
int main(){
    sumit sumit1;
    sumit1.sethealth(12);
     sumit1.setlevel('b');
    char name[7] = "Babbar";
    sumit1.setname(name);
    sumit1.print();
    sumit sumit2(sumit1);
    sumit2.print();
    sumit1.print();
    sumit1.name[0] = 'n';
    sumit2.print();




    // sumit shera(70, 'N');
    // shera.print();

    // sumit B(shera);
    // B.print();
    // cout<<"address of shera "<<&shera<<endl;
    // shera.gethealth();
    // sumit *h = new sumit();
    // h-> print();
    // sumit temp(22, 'n');
    // temp.print();
}