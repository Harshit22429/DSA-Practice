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


//Deletion

void deleteHead(Node* &head){
    Node* temp = head;
    head = temp->next;
    temp->next=NULL;
    delete temp;
}

// void deleteTail(Node* &Tail){
//     Node* &
// }
void deleteNodeByPosition(Node* &head,Node* &Tail, int position){
    if(position ==1){
        deleteHead(head);
        return;
    }
    Node* temp = head;
    int count =1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    Node* deleteNode = temp->next;
    if(deleteNode->next==NULL){
        cout<<"Inside deletion and last node deleted."<<endl;
        temp->next=NULL;
        Tail=temp;
        deleteNode->next=NULL;
        delete deleteNode;
        return;
    }
    temp->next=deleteNode->next;
    deleteNode->next =NULL;
    delete deleteNode;

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

    // create a new node1
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1 -> next<<endl;

    //point head to node1
    Node* head = node1; // node1 shows node1->data's address 
    Node* Tail = node1;
    // cout<<head<<"=="<<&(node1->data);
    print(head);
    
    //Insert new node at head
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);
    
    // Insert new node at end in this way tail will change and should update
    insertAtEnd(head,Tail,50);
    print(head);


    // Insert new Node at end by Tail 
    insertAtEndByTail(Tail, 100);
    print(head);


    // Insert new node at specific position
    insertAtPosition(head,Tail,4,111);
    insertAtPosition(head,Tail,1,0);
    insertAtPosition(head,Tail,8,0);
    print(head);

    cout<<"Head data is "<<head->data<<endl;
    cout<<"Tail data is "<<Tail->data<<endl;

    //Deletion 
    cout<<endl<<"Deletion"<<endl;
    // deleteHead(head);
    deleteNodeByPosition(head,Tail,8);
    print(head);


    cout<<"Head data is "<<head->data<<endl;
    cout<<"Tail data is "<<Tail->data<<endl;
    return 0;
}