#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node* node1 = new node(43);
    //     cout<<temp->next<<endl;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    node* head = node1;
    print(head);
    InsertAtHead(head, 12);
    print(head);
}