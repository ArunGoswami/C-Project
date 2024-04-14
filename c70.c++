 #include<iostream>
using namespace std;
void bublesort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,2,5,4,3};
     printarray(arr,5);

    bublesort(arr,5);

    cout<<"buble sort:";
     printarray(arr,5);
    return 0;
}