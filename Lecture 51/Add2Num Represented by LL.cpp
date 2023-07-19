#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;

    //Constructor used as a creation of new node
    Node(int data){
        this->data = data;
        this->next = NULL;//when new not create then point to next node as a NULL.
    }

    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"memory is free for data : "<<value<<endl;
    }
};


//Insertion
void insertAtHead(Node* &head, int data){
    //create new Node with data
    Node* newNode = new Node(data);
    // point newNode->next to current head
    newNode->next= head;
    // Now head is new node
    head = newNode;
}

void insertAtEnd(Node* &head,Node* &Tail, int data){
    //Creating new Node
    Node* newNode = new Node(data);

    //temp pointer point to linked list head
    Node* temp = head;

    //for temp at last node of LL
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=newNode;
    Tail=newNode;
}

void insertAtEndByTail(Node* &Tail,int data){
    Node* newNode = new Node(data);
    if(Tail!=NULL)
        Tail->next= newNode;
    Tail=newNode;
}

void print(Node* &head){    
    //temp pointer point to linked list head
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl;
}

// insert at Tail
void insertAtEnd2(Node* &head,Node* &Tail,int data){
    Node* newNode = new Node(data);
    if(head==NULL){
    
        head= newNode;
        Tail=newNode;
        return;
    }
    else{
        Tail->next=newNode;
        Tail=newNode;
    }
}

// reverse LL
// reverse Singly LL by Recursively Tail recursion
void reverseSLLbyTailRecursion(Node* &head,Node* curr=NULL,  Node* prev=NULL){
    curr=head;
    //Base case
    if(curr==NULL){
        head=prev;
        return;
    }
    //processing for small problem move pointers one step forward
    Node* forward =curr->next;
    curr->next = prev;
    prev = curr;
    curr= forward;
    head=curr;
    //Recursive call
    reverseSLLbyTailRecursion(head,curr, prev); 
}

// add two LL
Node* add2LL( Node* head1, Node* head2){
    int carry =0;
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    while( head1!=NULL || head2!=NULL || carry!=0){
        // print(ansHead);
        int val1=0;
        if(head1!=NULL)
            val1=head1->data;
        int val2=0;
        if(head2!=NULL)
            val2=head2->data;
        int sum = carry + val1 + val2;
        int digit = sum%10;
        // cout<<" value sum : "<<sum<<endl;
        insertAtEnd2(ansHead,ansTail,digit);
        // cout<<"After insert "<<endl;
        carry= sum/10;
        if( head1!=NULL)
            head1= head1->next;
        if (head2!=NULL)
            head2=head2->next;
    }
    return ansHead;
}
// 
Node* add2NumOfLL(Node* &head1, Node* &head2){
    Node* ans=NULL;
    // reverse both LL
    reverseSLLbyTailRecursion(head1);
    reverseSLLbyTailRecursion(head2);
    // cout<<"After reverse"<<endl;
    // print(head1);
    // print(head2);

    //traverse both and add parallel node with maintain carry and digit of sum store into ans LL
    ans = add2LL(head1,head2);
    // cout<<"After add"<<endl;
    // again reverse LL 
    reverseSLLbyTailRecursion(head1);
    reverseSLLbyTailRecursion(head2);
    reverseSLLbyTailRecursion(ans);
    // cout<<"again After reverse"<<endl;
    return ans;
}

int main(){
    // LL first
    Node* node1 = new Node(9);
    Node* head = node1;
    Node* Tail = node1;

    insertAtEnd(head,Tail,8);
    insertAtEnd(head,Tail,3);
    insertAtEnd(head,Tail,9);
    insertAtEnd(head,Tail,9);
    print(head);

    // LL second
    Node* node2 = new Node(9);
    Node* head2 = node2;
    Node* Tail2 = node2;

    insertAtEnd(head2,Tail2,2);
    insertAtEnd(head2,Tail2,9);
    // insertAtEnd(head2,Tail2,3);
    print(head2);

    // add tow numbers represented by LL
    Node* ansHead = add2NumOfLL(head,head2);

    print(ansHead);



    return 0;
}