#include<iostream>
using namespace std;
long long fectorial(long long n){
    if(n==0){
        return 1;
    }
    return n*fectorial(n-1);
}
int main(){
    long long n;
    cin>>n;
    long long ans=fectorial(n);
    cout<<ans<<endl;

    return 0;
}