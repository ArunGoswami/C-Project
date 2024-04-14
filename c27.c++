#include <iostream>
using namespace std;
void printArray(int Array int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }
   cout<<"printing the array "<<endl;
}
int main()
{
    int number[5];
    cout << "value at index is 4 " << number[4] << endl;
    int second[3] = {0,11,12};
     cout << "value at  3 " << second[2] << endl;
     int third[15] = {5,8,3,9,6};
     cout<<"value at index is 3 "<<third[3] << endl;
     int fourth[15]={9,7,8};
    cout<<"value at index 1 is"<<endl;
    for(int i=0; i<15; i++){
        cout<<fourth[i]<<endl;
    
     }
}