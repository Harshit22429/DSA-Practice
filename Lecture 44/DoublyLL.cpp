#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

//Insertion
void InsertAtHead(Node* &head,Node* &Tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head=newNode;
        Tail=newNode;
    }else{
        Node* newNode = new Node(data);
        newNode->next=head;
        head->prev= newNode;
        head=newNode;

    }
}


void InsertAtTail(Node* &head,Node* &Tail, int data){
    if(Tail==NULL){
        Node* newNode = new Node(data);
        head=newNode;
        Tail=newNode;
    }else{
        Node* newNode = new Node(data);
        Tail->next=newNode;
        newNode->prev=Tail;
        Tail=newNode;
    }
}

void InsertAtPosition(Node* &head, Node* &Tail,int position, int data){
    if(position==1){
        InsertAtHead(head,Tail,data);
        return;
    }
    Node* temp = head;
    int count =1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* newNode = new Node(data);
    if(temp->next==NULL){
        newNode->prev=temp;
        temp->next=newNode;
        Tail=newNode;
        return;
    }
    newNode->prev=temp;
    newNode->next=temp->next;
    temp->next=newNode;
}

//Deletion
void DeleteByPosition(Node* &head, Node* &Tail, int position){
    Node* temp = head;
    if(position==1){
        head=temp->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* deleteNode = temp->next;
    if(deleteNode->next==NULL){
        temp->next=NULL;
        deleteNode->prev=NULL;
        Tail=temp;
        delete deleteNode;
        return;
    }
    Node* deleteNextNode = deleteNode->next;
    deleteNextNode->prev=temp;
    temp->next=deleteNextNode;
    deleteNode->prev=NULL;
    deleteNode->next=NULL;
    delete deleteNode;
}



void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int getLength(Node* &head){
    int length =0;
    Node* temp = head;

    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
int main(){

    // //static obj
    // Node obj1(119);
    // cout<<obj1.data;

    //Dynamic obj with one node
    // Node* node1 = new Node(119);
    // Node* head = node1;
    // Node* Tail = node1;

    //Let initiali LL is empty
    Node* head = NULL;
    Node* Tail = NULL;



    print(head);
    cout<<"Current length is : "<<getLength(head)<<endl;
    //Insertion
    cout<<endl<<"Insertion"<<endl;
    InsertAtHead(head,Tail,12);
    print(head);
    cout<<"Current length is : "<<getLength(head)<<endl;

    InsertAtTail(head,Tail,80);
    print(head);
    cout<<"Current length is : "<<getLength(head)<<endl;

    InsertAtPosition(head,Tail,3,120);
    print(head);
    cout<<"Current length is : "<<getLength(head)<<endl;

    cout<<"Head data is "<<head->data<<endl;
    cout<<"Tail data is "<<Tail->data<<endl;


    //Deletion
    cout<<endl<<"Deletion"<<endl;
    DeleteByPosition(head,Tail,1);
    print(head);
    cout<<"Current length is : "<<getLength(head)<<endl;

    cout<<"Head data is "<<head->data<<endl;
    cout<<"Tail data is "<<Tail->data<<endl;



    return 0;
}

