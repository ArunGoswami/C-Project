#include <iostream>
using namespace std;
class hero
{

    private:
    int health;
    public:
    char level;
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
    };
};
int main()
{
    hero ramesh;
    // cout << " health is     " << ramesh.gethealth() << endl;
    ramesh.sethealth(10);
    ramesh.level = 'A';
    cout << "  health is    " << ramesh.gethealth() << endl;
    cout << " level is     " << ramesh.level << endl;
}