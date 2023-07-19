#include <iostream>
#include <unordered_map>
using namespace std;

class Node{

    public:
    int data;
    Node*next;
    Node* random;

    //Constructor used as a creation of new node
    Node(int data){
        this->data = data;
        this->next = NULL;//when new not create then point to next node as a NULL.
        this->random = NULL;
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

void poinElemToRand(Node* &head, int src, int dest){
    Node* srcNode = head;
    while(srcNode->data!=src){
        srcNode=srcNode->next;
    }
    Node* destNode = head;
    while(destNode->data!=dest){
        destNode=destNode->next;
    }
    srcNode->random=destNode;
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

void printByRandom(Node* &head){    
    //temp pointer point to linked list head
    Node* temp = head;
    while(temp!=NULL){
        cout<<"{ "<<temp->data<<":"<<temp->random->data<<" }"<<" ";
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


// Clone a Linked list same as next as well as random pointer and return head of it in ans 
Node* cloneByNextAndRand(Node* head){
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    Node* temp = head;
    while(temp!=NULL){
        insertAtEnd2(ansHead,ansTail,temp->data);
        temp=temp->next;
    }
    //maintain map as parallelNode<originalNode,cloneNode>
    unordered_map<Node*,Node*> parallelNode;
    temp=head;
    Node* cloneTemp = ansHead;
    while(temp!=NULL){
        parallelNode[temp]=cloneTemp;
        temp=temp->next;
        cloneTemp=cloneTemp->next;
    }
    temp = head;
    cloneTemp = ansHead;
    Node* randNode= head;
    while(temp!=NULL){
        cloneTemp->random= parallelNode[temp->random];
        temp=temp->next;
        cloneTemp= cloneTemp->next;
    }
    return ansHead;
}

// Clone a Linked list in optimal way and  same as next as well as random pointer and return head of it in ans 
Node* cloneByNextAndRandOpti(Node* head){
    // step-1
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    Node* tempOriginal = head;
    while(tempOriginal!=NULL){
        insertAtEnd2(ansHead,ansTail,tempOriginal->data);
        tempOriginal=tempOriginal->next;
    }
    cout<<"After step-1"<<endl;

    // step-2 insert clone linked list i between original linked list
    tempOriginal = head;
    Node* tempClone = ansHead;
    while( (tempOriginal!=NULL) && (tempClone!=NULL) ){
        //original to clone node
        Node* next = tempOriginal->next;
        tempOriginal->next= tempClone;
        tempOriginal=next;

        //clone to original node
        next = tempClone->next;
        tempClone->next= tempOriginal;
        tempClone=next;

    }
    cout<<"After step-2"<<endl;

    // step-3 point clone rnadom pointer
    Node* temp = head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->random = temp->random ? temp->random->next : temp->random;

        }
        temp=temp->next->next ;
    }
    cout<<"After step-3"<<endl;

    // step-4 revet of step-2
    tempOriginal = head;
    tempClone = ansHead;
    while((tempOriginal!=NULL) && (tempClone!=NULL)){
        tempOriginal->next=tempClone->next;
        tempOriginal=tempOriginal->next;

        if(tempOriginal != NULL){
            tempClone->next = tempOriginal->next;
        }
        tempClone=tempClone->next;

    } 
    cout<<"After step-4"<<endl;
    return ansHead;
}
int main(){

    Node* node = new Node(1);
    Node* head = node;
    Node* Tail = node;

    insertAtEnd(head,Tail,4);
    insertAtEnd(head,Tail,5);
    insertAtEnd(head,Tail,9);
    insertAtEnd(head,Tail,2);
    insertAtEnd(head,Tail,3);
    poinElemToRand(head,1,3);
    poinElemToRand(head,2,1);
    poinElemToRand(head,3,5);
    poinElemToRand(head,4,9);
    poinElemToRand(head,5,2);
    poinElemToRand(head,9,4);
    // cout<<head->random->data<<endl;
    print(head);
    printByRandom(head);

    // //create a colne same as above LL
    // Node* ansHead = cloneByNextAndRand(head);
    // print(ansHead);
    // printByRandom(ansHead);

    // create a clone LL of above LL
    Node* ansHeadOpti = cloneByNextAndRandOpti(head);
    print(ansHeadOpti);
    printByRandom(ansHeadOpti);
    return 0;
}