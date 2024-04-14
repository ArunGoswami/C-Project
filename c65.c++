#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
int s=0;
int e=n-1;
int mid = s+(e-s)/2;
while(s<e)
{
    if(arr[mid]>=arr[0])
    {
       s=mid+1;
    }
    else
    {
       e=mid;
    }
    mid = s+(e-s)/2;
}
  return s;
}

int binarysearch(int arr[], int size,int s,int e int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid]<key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
 #include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid]<key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};
    int even[6] = {1, 2, 3, 4, 5, 6};

    int index = binarysearch(even, 6, 2);
     cout<<"find pivot is "<<getPivot(arr,5)<<endl;
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }

    return 0;
}
   
    