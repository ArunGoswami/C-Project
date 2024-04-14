#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

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
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}
bool iscircularlist(Node* tail){
    if(tail==NULL){
        return NULL;
    }
    Node* temp=tail->next;
    while(temp !=NULL && temp!=tail){
        temp=temp->next;
    }
    if(temp==tail){
        return true;
    }
    return false;
}
int main()
{
    Node *tail = NULL;
    insertatNode(tail, 5, 3);
    print(tail);

    insertatNode(tail, 3, 5);
    print(tail);

   if(iscircularlist(tail)){
     cout<<" link"<<endl;
    }
    else{
    cout<<" link"<<endl;
    }
    return 0;
}