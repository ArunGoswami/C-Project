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
int main(){
    node* node1=new node(43);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

}