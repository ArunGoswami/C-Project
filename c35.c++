#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = accumulate(arr, arr + size, 0);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Sum: " << sum << endl;
    return 0;
}
