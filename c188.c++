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
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}
void print(node* &head){
     node* temp = head;
     while(temp != NULL)
     {
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;
}
void insertatmid(node * &head,int mid,int d){
    node* temp=head;
    int cnt=1;

    while(cnt<mid-1){
        temp=temp->next;
        cnt++;
    }
    node * nodetoinsert =new node(d);
    nodetoinsert ->next=temp->next;
    temp->next=nodetoinsert;
}
int main(){
    node* node1=new node(43);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    node* head = node1;
     node* tail = node1;
    print(head);
    insertattail(tail, 23);
    print(head);
    insertattail(tail, 65);
    print(head);
 insertatmid(head,2,22);
  print(head);

}