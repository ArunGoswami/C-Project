#include<iostream>
using namespace std;

// int getmax(int &a,int&b){
//     return(a<b)? a:b;
// } 
// int main(){
//     int a=1;
//     int b=2;
//     int ans=0;
//     ans=getmax(a,b);
//     cout<<ans<<endl;
//     a=a+3;
//     b=b+1;
//     ans=getmax(a,b);
//     cout<<ans<<endl;
//     return 0;
// } 
void print(int arr[],int n,int start = 0){
    for(int i=start; i<n; i++){
    cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    print(arr, size);
    cout<<endl;
    print(arr, size, 4);

    return 0;
}




