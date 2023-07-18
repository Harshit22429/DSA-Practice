#include <iostream>
using namespace std;

// Singly Linked List
class Node{
    public: 
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next=NULL;
    }
};

// Circular Linked List
class Node2{
    public: 
    int data;
    Node2* next;

    //constructor
    Node2(int d){
        this->data = d;
        this->next=NULL;
    }
    //deconstructor
    ~Node2(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for data : "<<value<<endl;
    }
};


//Insertion in circular Linked list
void insertNodeAfterElement(Node2* &Tail,int element, int d){
    //creation of new node
    Node2* newNode = new Node2(d);
    // cout<<Tail->data<<" "<<element<<endl;
    //empty list
    if(Tail==NULL){    
        cout<<"Inside tail null"<<endl;
        Tail=newNode;
        newNode->next=newNode;
    }
    else{
        // if tail is given element
        if(Tail->data == element){
            cout<<"Inside tail is element"<<endl;
            newNode->next=Tail->next;
            Tail->next=newNode;
            // Tail = newNode;
            return;
        }
        //create temp pointer to traverse till element
        Node2* temp = Tail;
        while(temp->data!=element){
            temp = temp->next;
        }
        //after traversing if temp is last element 
        if(temp->next == NULL){
             cout<<"Inside temp->next null"<<endl;
            newNode->next = temp->next;
            temp->next= newNode;
            // Tail = newNode;
            return;
        }
        //if temp is middle element
        newNode->next = temp->next;
        temp->next= newNode;
    }
}


//Insertion in Singly Linked list
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


// Reverse K- Group by Recursion
Node* Kreverse(Node* head, int k){

    // Base case
    if(head==NULL){
        return head;
    }

    //first k group reversing for this head point to NULL
    int count=0;
    Node* prev=NULL;
    Node* curr = head;
    Node* next=NULL;

    while(curr != NULL, count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    } //after finising this k group 'next' trate as head for next k group


    // Recursion for pointing k group head to next group new head
    head->next = Kreverse(next,k);

    return prev;
}

// is Linked list circular? function
bool isCircularLL(Node2* head){
    Node2* temp = head->next;
    while(temp!=head){
        if(temp==NULL || temp->next ==NULL){
            return false;
        }
        temp=temp->next;
    }
    return true;
}

//print SLL
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

//print CLL
void print2(Node2* Tail){
    if(Tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node2* temp =Tail;
    // cout<<Tail->data<<" ";
    do{
        cout<<Tail->data<<" ";
        Tail=Tail->next;
    }while(Tail!=temp);
    cout<<endl;
}
int main(){
    //Singly LL
    Node* node1 = new Node(66);
    Node* head= node1;
    Node* Tail= node1;

    //Circular LL
    Node2* Tail2 = NULL;
    //insertion in CLL
    insertNodeAfterElement(Tail2,123,10);
    insertNodeAfterElement(Tail2,10,11);
    insertNodeAfterElement(Tail2,10,91);
    cout<<"Circular LL : ";
    print2(Tail2);
    //insertion in SLL
    insertAtEnd(head,Tail,48);
    insertAtEnd(head,Tail,70);
    insertAtEnd(head,Tail,23);
    cout<<"Singly LL : ";
    print(head);
    // reverse a linked list by k-group nodes
    head = Kreverse(head,2);
    print(head);

    //is linked list is circular
    cout<<" List is circular or not "<<isCircularLL(Tail2);
    return 0;
}