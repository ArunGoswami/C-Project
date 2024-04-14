#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>,greater<int> >mini;
    maxi.push(4);
    maxi.push(3);
    maxi.push(2);
    maxi.push(1);

    for(int i=0; i<maxi.size();i++)
    {
      cout<<maxi.top()<<" ";
      maxi.pop();
    }
    cout<<endl;
}