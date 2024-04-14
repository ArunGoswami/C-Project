// 
#include<iostream>
using namespace std;

class hero {
public:
    int health;
    char level;

    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health = h;
    }

    char getLevel() {
        return level;
    }

    void setLevel(char l) {
        level = l;
    }
};

int main() {
    hero ramesh;
    cout << "size: " << sizeof(ramesh) << endl;
    cout << "level: " << ramesh.getLevel() << endl;
    return 0;
}

