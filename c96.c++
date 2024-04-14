#include <iostream>
using namespace std;
char getmaximumcharacter(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int number = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            number = s[i];
        }
        else
        {
            number = s[i] - 'A';
        }
        arr[number]++;
    }

int maxi = -1;
int ans = 0;
for(int i = 0; i < 25; i++)
{
    if (maxi < arr[i])
    {
        ans = i;
        maxi = arr[i];
    }
}

char finalans = 'a' + ans;
return finalans;
}
int main()
{
    string s;
    cin >> s;
    cout << getmaximumcharacter(s) << endl;
    return 0;
}