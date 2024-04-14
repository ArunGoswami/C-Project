#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(12);
    q.push(2);

    cout << "size of " << q.size() << endl;
    cout << "front of " << q.front() << endl;
    q.pop();

    cout << "size of " << q.size() << endl;
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is full" << endl;
    }
}