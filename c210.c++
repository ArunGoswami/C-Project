#include <iostream>
using namespace std;

class kQueue
{

public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;

public:
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < n; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[k];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[k];
        freespot = 0;
    }
    void enqueue(int data, int qn)
    {
        if (freespot == -1)
        {
            cout << " no empty" << endl;
            return;
        }
        int index = freespot;
        freespot = next[index];
        if (front[qn - 1] == -1)
        {
            next[rear[qn - 1]] = index;
        }
        next[index] = -1;
        rear[qn - 1] = index;
        arr[index] = data;
    }
    void dequeue(int qn)
    {
        if (front[qn - 1] == -1)
        {
            cout << "queue" << endl;
        }
        int index = front[qn - 1];

        front[qn - 1] = next[index];
        next[index] = freespot;
        freespot = index;
    }
    int main()
    {
        kQueue q(10, 3);
        q.enqueue(10, 1);
        cout<<q.dequeue(3)<<endl;
    }
};