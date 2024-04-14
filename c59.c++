#include<iostream>
using namespace std;
int binaryseach(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while (start<=end)
    {
     if(arr[mid]==key){
        return mid;
        
     }
     if(arr[mid]<key)
     {
      start = mid+1;
     }
     else{
        end = mid-1;
     }
     mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int even[6] ={1,2,3,4,5,6};

    int odd[5] = {12,32,45,65,78};

    int index = binaryseach(even,6,4);
    if (index == -1)
    {
        cout << "Element not found" << endl;
    } else
     {
    cout<<"bineary search is "<<index<<endl;
    }
    return 0;
}