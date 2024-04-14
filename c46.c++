#include<iostream>
using namespace std;

int printarray(int arr[],int size){
 int ans=0;
    for(int i=0; i<size; i++){
        int n;
        cin>>n;
        ans=arr[i]^ans+n;
        

    }
    return ans;
}
int main(){
    int arr[9]={1,1,1,4,2,2,4,4,5};
     printarray(arr,9);
     cout<<"answer is"<<ans<<endl;
     return 0;
}