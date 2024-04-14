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
void insertattail(node* &tail, int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=tail->next;
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
    node*  tail=node1;
    
    node* head = node1;
    print(head);
    insertattail(tail, 23);
    print(head);

}