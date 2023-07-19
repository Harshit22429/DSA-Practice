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

void print(Node* &head){    
    //temp pointer point to linked list head
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl;
}

// sort 0,1,2 when data replacement is not allowed
void sort012(Node* &head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr!=NULL){
        if(curr->data==0){
            zeroTail->next=curr;
            zeroTail= curr;
        }
        else if(curr->data==1){
            oneTail->next=curr;
            oneTail= curr;
        }
        else if(curr->data==2){
            twoTail->next=curr;
            twoTail= curr;
        }
        curr=curr->next;
    }

    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }else{
        zeroTail->next=twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head= zeroHead->next;
    zeroHead->next=NULL;
    oneHead->next=NULL;
    twoHead->next = NULL;
    delete zeroHead;
    delete oneHead;
    delete twoHead;    
}


// Merge two sorted LL
Node* merge2LL(Node* &head1,Node* &head2){
    Node* temp1 = head1;
    Node* prev = head1;
    Node* curr= head1->next;
    Node* temp2 = head2;
    while ((temp2!=NULL))
    {   
        cout<<"temp2 data "<<temp2->data<<" prev data "<<prev->data<<endl;
        if((temp2->data<prev->data)){
            Node* nodeToAdd = temp2;
            temp2=temp2->next;
            nodeToAdd->next = prev;
            head1=nodeToAdd;
        }
    }
    
    // if( ){
                
    //     }
    while((temp1!=NULL) && (temp2!=NULL)&& (curr!=NULL) && (prev!=NULL) ){
        // cout<<"preve data "<<prev->data<<" curr data "<<curr->data<<" temp2 data "<<temp2->data<<endl;
        
        if( (prev->data <= temp2->data) &&(temp2->data <= curr->data)){
            // cout<<"Inside if condition"<<endl;
            Node* nodeToAdd = temp2;
            temp2=temp2->next;
            prev->next=nodeToAdd;
            nodeToAdd->next = curr;
            prev=nodeToAdd;
            temp1=temp1->next;
        }else{
            // cout<<"Inside else condition"<<endl;
            prev =curr;
            curr=curr->next;
            temp1=temp1->next;
        }
    }
    if(temp2!=NULL){
        cout<<"Temp 2 is remaining "<<endl;
        temp1->next= temp2;
    }
    return head1;
}

int main(){

    // LL 1
    Node* node1 =new Node(1);
    Node*Tail1 = node1;
    Node* head1 = node1;
    // LL 2
    Node* node2 =new Node(0);
    Node*Tail2 = node2;
    Node* head2 = node2;

    //Insertion at first LL
    // insertAtEnd(head1,Tail1,3);
    // insertAtEnd(head1,Tail1,5);
    // insertAtEnd(head1,Tail1,9);
    // insertAtEnd(head1,Tail1,1);
    // insertAtEnd(head1,Tail1,2);
    // insertAtEnd(head1,Tail1,1);
    // insertAtEnd(head1,Tail1,0);
    // insertAtEnd(head1,Tail1,2);
    print (head1);


    //Insertion at first LL
    // insertAtEnd(head2,Tail2,3);
    // insertAtEnd(head2,Tail2,4);
    // insertAtEnd(head2,Tail2,8);
    // insertAtEnd(head2,Tail2,10);
    // insertAtEnd(head2,Tail2,13);
    // insertAtEnd(head2,Tail2,17);
    // insertAtEnd(head2,Tail2,20);
    print(head2);


    // sorting of 0,1,2 by store count of each type of node then again traverse and replace node data


    // sorting of 0,1,2 without replacement of data
    // sort012(head1);
    // print(head1);


    // Merge 2 sorted Linked List
    Node* ansHead= merge2LL(head1, head2);
    // cout<<"ans Head = " <<ansHead->data;
    print(ansHead);



    return 0;
}