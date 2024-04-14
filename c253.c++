#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase " << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << " not in lowercase " << endl;
    }
}