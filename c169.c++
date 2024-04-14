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

    // hero s(70,'c');
    // s.print();

    // hero r(s);
    // r.print();

    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Babbar";
    hero1.setname(name);
    hero1.print();
    hero hero2(hero1);
    hero2.print();
    hero1.name[0] = 'g';
    hero1.print();
    hero2.print();
}