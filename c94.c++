#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void reverse(string &s)
{
    reverse(s.begin(), s.end());
    int start = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] ==' ')
        {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }

    }
        reverse(s.begin() + start, s.end());
     }

int main()
{
    string s = "hello world";
    reverse(s);
    cout << s << endl;
    return 0;
}