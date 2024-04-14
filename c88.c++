#include <iostream>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];
    cout << "Enter your name";
    cin >> name;
    cout << "your name is";
    cout << name << endl;
    cout << "your length is"<< getlength(name) << endl;
}