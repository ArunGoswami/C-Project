#include <iostream>
using namespace std;
int firstoccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans=-1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) {
                     start = mid + 1;
                 }
            else
            {
                end = mid - 1;
            }
        return ans;
    }
    mid = (start + end) / 2;
}int lastoccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans=-1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) {
                     start = mid + 1;
                 }
            else
            {
                end = mid - 1;
            }
        return ans;
    }
    mid = (start + end) / 2;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    cout << "first occurence" << firstoccurence(arr,5, 3)<<endl;
    cout << "last occurence" << lastoccurence(arr,5, 3)<<endl;
    return 0;
}