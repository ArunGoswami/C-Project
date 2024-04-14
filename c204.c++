#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    int *arr;
    int size;

    stack(int size)
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
            cout << "stack overflow" << endl;
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
            cout << "stack underflow" << endl;
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
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isempty()
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
    stack st(5);
    st.push(3);
    st.push(35);
    st.push(6);
    st.push(4);
    st.push(5);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << " top element  " << st.peek() << endl;
    if (st.isempty())
    {
        cout << "empty " << endl;
    }
    else
    {
        cout << " not empty " << endl;
    }
    return 0;
}