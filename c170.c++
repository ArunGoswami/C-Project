#include <iostream>
#include<cstring>
using namespace std;
class hero
{

private:
    int health;

public:
    char level;
    char *name;
  static int timetocomplete;
    hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }
    hero(int health)
    {
        this->health = health;
    }
    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    hero(hero &temp)
    {
        cout << "copy constructure" << endl;
  this->name = temp.name;
        this->level = temp.level;
        this->health = temp.health;
    }
    void print()
    {
        cout << "name  " << this->name << " ";
        cout << "level  " << this->level << endl;
        cout << "health  " << this->health << endl;
        cout<<endl;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    static int random(){
        cout<<timetocomplete<<endl;
    }
    ~hero(){
        cout<<"destructor called"<<endl;
    }
};
int hero::timetocomplete=5;
int main()
{
    cout<<hero::timetocomplete<<endl;
    hero a;
 
    cout<<a.timetocomplete<<endl;
    // cout<<hero::random()<<endl;
    // hero b;
    // b.timetocomplete=10;
    // cout<<a.timetocomplete<<endl;
    // cout<<b.timetocomplete<<endl;
}