#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotindex = s + cnt;
    swap(arr[pivotindex], arr[s]);
    int i = s;
     int j=e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
    }
}

void quicksort(int *arr, int s, int e)
{
    if (s > e)
    {
        return;
    }
    int p = partition(arr, s, e);

    quicksort(arr, s, p - 1);

    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 4};
    int size = 5;
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}