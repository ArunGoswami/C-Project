#include <iostream>
using namespace std;

void marge(int *arr, int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[s+i];
    }
    for (int j = 0; j < len2; j++)
    {
        second[j] = arr[mid+1+j];
    }
    int Index1 = 0;
    int Index2 = 0;

    mainArrayIndex = s;

    while (Index1 < len1 && Index2 < len2)
    {
        if (first[Index1] <= second[Index2])
        {
            arr[mainArrayIndex] = first[Index1];
            Index1++;
        }
        else
        {
            arr[mainArrayIndex] = second[Index2];
            Index2++;
        }
        mainArrayIndex++;
    }
    while (Index1 < len1)
    {
        arr[mainArrayIndex++] = first[Index1];
        Index1++;
        mainArrayIndex++;
    }
    while (Index2 < len2)
    {
        arr[mainArrayIndex++] = second[Index2];
         Index2++;
        mainArrayIndex++;
    }
     delete[] first;
    delete[] second;
}

void margeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    margeSort(arr, s, mid);

    margeSort(arr, mid + 1,e);

    marge(arr, s,mid,e);
}
int main()
{
    int arr[5] = {1, 2, 4, 6, 3};
    int n = 5;
    margeSort(arr, 0, n - 1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}