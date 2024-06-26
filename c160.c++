#include <iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    for (int i = 0; i < len1; i++)
        first[i] = arr[s + i];
    for (int j = 0; j < len2; j++)
        second[j] = arr[mid + 1 + j];

    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainArrayIndex] = first[index1];
            index1++;
        }
        else
        {
            arr[mainArrayIndex] = second[index2];
            index2++;
        }
       mainArrayIndex++;
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex] = first[index1];
        index1++;
        mainArrayIndex++;
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex] = second[index2];
        index2++;
        mainArrayIndex++;
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, mid, e);
}

int main()
{
    int arr[5] = {1, 3, 4, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
