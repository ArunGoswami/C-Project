#include <iostream>
using namespace std;

int printarray(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2,1,2, 3};
    int result = printarray(arr, 5);
    cout << "XOR of array elements and user input: " << result << endl;
    return 0;
}
