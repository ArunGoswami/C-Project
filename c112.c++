#include<iostream>
using namespace std;

int largestrowsum(int arr[][3], int numRows, int numCols){
    cout << "printing sum " << endl;
    int maxi = 0;
    int rowIndex = -1;
    for(int row = 0; row < numRows; row++){
        int sum = 0;
        for(int col = 0; col < numCols; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
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
    cout << "max row is at index " << largestrowsum(arr, 3, 3) << endl;
    return 0;
}

