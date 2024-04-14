#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow " << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " stack underflow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << " Stack is Empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    Stack st(5);

    st.push(44);
    st.push(434);
    st.push(344);
    st.push(443);
    st.push(144);
    st.push(144);

    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is Empty " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }
    /*
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(4);
    s.push(7);

    s.pop();

    cout<<"print top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<" Stack is empty "<<s.empty()<<endl;
    }
    else
    {
        cout<<" Stack is not empty "<<s.empty()<<endl;
    }
     cout<<"size of stack is "<<s.size()<<endl;
     */

    return 0;
}