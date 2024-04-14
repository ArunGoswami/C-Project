#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(5);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    
    cout<<"list "<<l.size()<<endl;
   return 0;
}