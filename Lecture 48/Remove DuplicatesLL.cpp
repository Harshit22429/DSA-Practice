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


void print(Node* &head){    
    //temp pointer point to linked list head
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl;
}

// remove duplicate function
void removeDupl(Node* &head){
    print(head);
    if(head==NULL){
        return ;
    }
    Node*curr =head;
     
    while( (curr!=NULL)  ){
        if( (curr->next!=NULL) &&(curr->data==curr->next->data) ){
            Node* nodeToDelete=curr->next; 
            curr->next=curr->next->next;
            nodeToDelete=NULL;
            delete nodeToDelete;            
        }else{
            curr =curr->next;            
        }
    }
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
    

    //remove duplicate form sorted singly LL
    removeDupl(head);
    cout<<"After head data "<<head->data<<endl;
    print(head);


    //remove duplicate form unsorted singly LL
            /*         Pending
            3 Aproach:-
                    i) for each element traverse whole LL and delete which is same 
                        T.C.=O(n) S.C. = O(1)
                    ii) using map check node is visited or not
                        T.C.=O(n) S.C. = O(n)
                    iii) first sort LL using T.C.=O(nlogn)
                          Then reverse as above Qustion with T.C.=O(n)
                        T.C.=O(nlogn) S.C. = O(1)*/

    return 0;
}