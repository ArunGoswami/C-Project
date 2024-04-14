#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;



    q.push(4);
    cout << "front of queue is: " << q.front() << endl;
    q.push(6);
    // cout << "front of queue is: " << q.front() << endl;
    q.push(9);

    q.rear();
    cout << "rear of queue is: " << q.rear() << endl;

    cout << "size of queue is: " << q.size() << endl;

    q.pop();
    cout << "front of queue is: " << q.front() << endl;
    // cout << "front of queue is: " << q.front() << endl;
    cout << "size of queue is: " << q.size() << endl;
    q.pop();
    // q.pop();
    cout << "front of queue is: " << q.front() << endl;

    cout << "size of queue is: " << q.size() << endl;

    if (q.empty())
    {

        cout << "queue is emtpy: " << q.empty() << endl;
    }
    else
    {
        cout << "queue is not emtpy: " << q.empty() << endl;
    }
}