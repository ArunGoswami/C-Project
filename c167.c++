#include <iostream>
using namespace std;
class hero
{

private:
    int health;

public:
    char level;
    hero()
    {
        cout << "constructor called" << endl;
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
    hero(hero & temp){
        cout<<"copy constructure"<<endl;

         this->level=temp.level;
        this->health=temp.health;
    }
    void print()
    {

        cout << "level  " <<this->level<< endl;
            cout << "health  " <<this->health<< endl;
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
};
int main()
{
    // hero ramesh;
    // cout << "address of ramesh" << &ramesh << endl;
    // ramesh.gethealth();
    // hero *h = new hero();
    // h->print();
    // hero temp(22, 'B');
    // temp.print();

hero s(70,'c');
s.print();

hero r(s);
r.print();



}