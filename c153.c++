#include <iostream>
using namespace std;
bool checkpalindrome(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkpalindrome(str, i + 1, j - 1);
    }
}
int main()
{
    string str = "rrr";
    cout << endl;
    bool ispalindrome = checkpalindrome(str, 0, str.length() - 1);
    if (ispalindrome)
    {
        cout << "present " << ispalindrome << endl;
    }
    else
    {
        cout << "not present " << ispalindrome << endl;
    }
    return 0;
}