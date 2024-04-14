#include<iostream>
using namespace std;
int beanarysearch(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid]<k){
        return beanarysearch(arr,mid+1,e,k);
    }
    else{
         return beanarysearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size=5;
    int key=7;
    int ans=beanarysearch(arr,0,5,key);
    cout<<ans<<endl;
    return 0;

}