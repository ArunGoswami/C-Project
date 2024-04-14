#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int row, int col, int target){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        
        }
    }
    return 0;
}
int main()
{
      int arr[4][4];
        int target;
         cout << "element to print" ;
        cin >> target;
        cout << "element to search" << endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if (ispresent(arr, 4, 4,target))
        {
            cout << "element is found" << endl;
        }
        else
        {
            cout << "element is not found" << endl;
        }
    return 0;
}