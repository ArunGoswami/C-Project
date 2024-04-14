#include <iostream>
using namespace std;
bool iseven(int a)
{
    if (a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;

    if (iseven(n))
    {
        cout << "is  even" << endl;
    }
    else
    {
        cout << "is odd" << endl;
    }
 }