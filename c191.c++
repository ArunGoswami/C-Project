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
~node(){
    int value = this->data;
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
    cout<<"memory is free "<<value<<endl;
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
     cout<<endl;
}
void insertatmid(node* &head, int mid, int d){
    node* temp = head;
    int cnt =1;

    while(cnt<mid-1){
        temp = temp->next;
        cnt++;
    }
    node* nodetoinsert = new node(d);
    nodetoinsert ->next = temp->next;
    temp->next = nodetoinsert;
}
void deletenode(int mid, node* &head){
    if(mid == 1){
        node* temp=head;
        head=head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<mid)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr -> next = NULL;
        delete curr;
    }
}
int main(){
    node* node1=new node(43);
    //  cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;
    node*  tail=node1;
    node* head = node1;
    print(head);
    insertattail(tail, 23);
    print(head);
     insertattail(tail, 65);
    print(head);
    insertatmid(head,3,55);
    print(head);
    cout<<" head  "<<head->data<<endl;
    cout<<" tail  "<<tail->data<<endl;
    deletenode(4,head);
    print(head);
     cout<<" head  "<<head->data<<endl;
    cout<<" tail  "<<tail->data<<endl;

}