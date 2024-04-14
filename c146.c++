#include <iostream>
using namespace std;
bool issorted( int *arr,int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingpart = issorted(arr+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[6] = {1,2,3,4,8,6};
    int size=6;
    bool ans = issorted(arr,size);
    if(ans){
        cout<<"is sorted "<<endl;
    }
    else{
          cout<<"is not sorted "<<endl;
    }
    return 0;
}