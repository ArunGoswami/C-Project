#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int rows=1; rows<=n; rows++){
    for(int column=1; column<=rows; column++){
        cout<< rows;
    }
    cout<<endl;
}
}