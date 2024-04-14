#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory"<<value<<endl;
    }
};
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}
void insertatposition(Node* &head, int position,int d){
   
   if(position==1){
    insertathead(head,d);
   }
    Node* temp =head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deletenode(int position,Node* &head){
    if(position==1){
    Node* temp=head;
    head=head->next;
   
    delete temp;
}
else{
    Node* curr=head;
     Node* prev=NULL;

     int cnt=1;
    while(cnt<= position){
    prev=curr;
    curr=curr->next;
    cnt++;
    } 
    prev->next=curr->next;
    delete curr;
}
}
int main(){
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,12);
    print(head);
    insertattail(tail,12);
    print(head);
    insertatposition(head,3,4);
    print(head);
     cout<<head->data<<endl;
    cout<<head->next<<endl;
    deletenode(3,head);
    print(head);
}
