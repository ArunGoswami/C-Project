#include <iostream>
using namespace std;
int printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        int ans = 0;
        int n;
        cin >> n;
        ans = ans ^ arr[i];
    }
    return ;
}
int main()
{
    int arr[7] = {1, 2, 3, 7, 1, 2, 3};
    int result = printarray(arr, 7);
    cout << "xor " << result << endl;
    return 0;
}