#include <iostream>
using namespace std;
int printarray(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < 'arr.size()'; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < 'arr.size()'; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9};
    int size=10;
    int result= printarray(arr, 10);
    cout << "xor of" << result << endl;
    return 0;
}