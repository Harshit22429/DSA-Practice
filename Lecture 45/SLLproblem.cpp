#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data= d;
        this->next=NULL;
    }

    //decunstructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"Delete node and memory free for node : "<<value;
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
    Tail->next= newNode;
    Tail=newNode;
}

void insertAtPosition(Node* &head,Node*&Tail, int position, int data){
    // Insert at 1'st position
    if(position==1){
        insertAtHead(head,data);
        return; 
    }
    Node* temp= head;
    int count =1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    // if insert at last then
    if(temp->next==NULL){
        insertAtEndByTail(Tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//print LL
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

// reverse Singly LL by Itratively
void reverseSLLbyItrative(Node* &head){
    Node* prev=NULL;
    Node* curr = head;
    Node* forward;
    while(curr!=NULL){
        forward =curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
    }
    head = prev;
}

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

// reverse Singly LL by Recursively Head recursion
Node* reverseSLLbyHeadRecursively(Node* &head){
    //Base case 
    if(head==NULL || head->next ==NULL){        
        return head;
    }
    // Head recursion
    Node* chotahead=reverseSLLbyHeadRecursively(head->next);

    // small problem
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}


//Middle element fucntion
int middleElementLL(Node* &head){
    int count =1;
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    int mid;
    if(count&1){
        mid=(count+1)/2;
    }else{
        mid= count/2 +1;
    }
    int ans;
    temp=head;
    for(int i=1; i<mid;i++){
        temp=temp->next;
    }
    ans=temp->data;
    return ans;
}
int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* Tail = node1;
    insertAtEnd(head,Tail,20);
    insertAtEnd(head,Tail,20);
    insertAtEnd(head,Tail,90);
    insertAtEnd(head,Tail,95);
    insertAtEnd(head,Tail,40);
    insertAtEnd(head,Tail,70);
    insertAtEnd(head,Tail,30);
    cout<<"Before revese SLL is : ";
    print(head);



/*
    // reverse LL
    reverseSLLbyItrative(head);
    cout<<"After revese SLL using Itrative is : ";
    print(head);

    reverseSLLbyTailRecursion(head);
    cout<<"After revese SLL using Head Recursion is : ";
    print(head);
    
    head = reverseSLLbyHeadRecursively(head);
    cout<<"After revese SLL using Head Recursion is : ";
    print(head);
*/


    // reverse doubly linked list HW


    // Middle of Linked List
    int middleElem= middleElementLL(head);
    cout<<"Middle element of above LL is : "<<middleElem<<endl;
    return 0;
}