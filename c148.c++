#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
int mid=s+(e-s)/2;
if(arr[mid]==k){
    return true;
}
if(arr[mid]<k){
    return binarysearch(arr,mid+1,e,k);
}
else{
        return binarysearch(arr,s,mid-1,k);
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=8;
    bool ans=binarysearch(arr,0,5,key);
    
        cout<<ans<<endl;
    
    


    return 0;
}