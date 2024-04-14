#include <iostream>
using namespace std;
void printArray(int Array[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<Array[i] << " ";
    }
   cout<<"printing the array "<<endl;
}
int main(){
    int first[15];
    int n=15;
     printArray(first,15);  
}
   
    
     
     
         