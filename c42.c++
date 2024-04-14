#include<iostream>
using namespace std;

void swapAltarnet(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[7] = {1,2,3,4,5,6,7};

    swapAltarnet(arr, 6);
    swapAltarnet(brr, 7);

    printarray(arr, 6);
    printarray(brr,7);

    return 0;
}