#include<iostream>
using namespace std;
class node
{
    public:
    node* next;
    int data;

    node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void insertathead(node* &head, int d){
    node* temp = new node(d);
    temp-> next = head;
    head = temp;
}
void print(node* &head){
     node* temp = head;
     while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
}
int main(){
    node* node1=new node(43);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    node* head = node1;
    print(head);
    insertathead(head, 23);
    print(head);

}