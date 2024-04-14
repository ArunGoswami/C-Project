#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printarray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,2,5,4,3};
    printarray(arr,5);

    bubblesort(arr,5);

    cout<<"Bubble sort: ";
    printarray(arr,5);

    return 0;
}
