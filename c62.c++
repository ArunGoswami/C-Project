#include <iostream>
using namespace std;
int firstoccor(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            mid = ans;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s);
    }
    return ans;
}
int lasttoccor(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            mid = ans;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s);
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "first occor is " << firstoccor(arr, 5, 3) << endl;
    cout << "last occor is " << lasttoccor(arr, 5, 3) << endl;
    return 0;
}