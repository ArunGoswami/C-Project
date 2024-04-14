#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int rotated_arr[5] = {4, 5, 6, 1, 2};
    int pivot = getPivot(rotated_arr, 5);
    int target = 2;

    if (rotated_arr[pivot] <= target && target <= rotated_arr[4])
    {
        int index = binarysearch(rotated_arr + pivot, 5 - pivot, target);
        if (index == -1)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            cout << "Element found at index " << pivot + index << endl;
        }
    }
    else if (rotated_arr[0] <= target && target <= rotated_arr[pivot - 1])
    {
        int index = binarysearch(rotated_arr, pivot, target);
        if (index == -1)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            cout << "Element found at index " << index << endl;
        }
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
