class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* getstartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floyadDetectLoop[head];
    Node* slow=head;

    while(slow !=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}



Node* removeLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* startOfLoop = getstartingNode(head);
    Node* temp = startOfLoop;
    while (temp -> temp != startOfLoop ) {
         temp = temp -> next;
    }   
        temp->next=NULL;
    return head;
}

Node* detectloop(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
            if (fast == slow) {
                return fast;
            }
        }
    }
    return NULL;
}
