
#include<iostream>
using namespace std;
int largestrowsum(int arr[][3],int row,int col){
   // cout<<"printing the sum "<<endl;
    int maxi=0;
    int rowindex = -1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"maximum num is "<<maxi<<endl;
    return rowindex;
}


int main(){
    int arr[3][3];
    cout << "Enter the elements: " << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }
    cout << "Enter the array: " << endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
        cout<<"largest " << largestrowsum(arr,3,3)<<endl;
        return 0;
    }