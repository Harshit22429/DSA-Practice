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

// remove duplicate function
void removeDupl(Node* &head){
    if(head==NULL){
        return ;
    }
    Node*prev =head;
    Node* curr = head->next;
    while( curr!=NULL || curr->next ){
        if(prev->data==curr->data){
            curr=curr->next;
        }else{
            prev=curr;
            curr =curr->next;
        }
    }

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

int main(){

     Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1 -> next<<endl;

    //point head to node1
    Node* head = node1; // node1 shows node1->data's address 
    Node* Tail = node1;
    // cout<<head<<"=="<<&(node1->data);
    
    //Insert new node at head
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,30);
    insertAtEnd(head,Tail,90);
    insertAtEnd(head,Tail,90);
    print(head);
    

    //remove duplicate form LL
    removeDupli(head);

    return 0;
}