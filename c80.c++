#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("love");
    q.push("ARUN");
    q.push("kumar");
    cout<<"element "<<q.size()<<endl;
    cout<<"element "<<q.front()<<endl;
    return 0;
}