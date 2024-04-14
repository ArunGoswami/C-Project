#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free " << val << endl;
    }
};
void insertatNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node* &tail)
{
    Node* temp = tail;
    do
    {`
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}
void deleteNode(Node* &tail,int value){
    if(tail==NULL){
cout<<"list is empty"<<endl;
return;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data)
       
    }

}
int main()
{
    Node* tail = NULL;
    insertatNode(tail, 6, 3);
    print(tail);

    insertatNode(tail,3,6);
    print(tail);

    return 0;
}