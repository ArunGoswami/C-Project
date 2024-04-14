#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for(int i:s)
    {
        cout<<i<<endl;
    }
    set<int>:: iterator it=s.begin();
    it++; 
     s.erase(it);
     for(int i:s)
    {
        cout<<i<<endl;
    }
}