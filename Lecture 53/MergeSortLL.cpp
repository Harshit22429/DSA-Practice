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

Node* merge(Node* left, Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right!=NULL){
        if(left->data <right->data){
            temp-> next = left;
            temp = left;
            left = left -> next;
        }else{
            temp -> next = right;
            temp = right;
            right = right->next;
        }
    }

    while(left!=NULL){
        temp ->next = left;
        temp = left;
        left = left->next;
    }
    while(right !=NULL){
        temp ->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    print(ans);
     return ans;
}

Node* findMid(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next->next!=NULL){
        fast= fast->next->next ? fast->next->next : fast->next ;        
        slow = slow->next;
    }
    return slow;
}
Node* mergeSort(Node* &head){

    //base case 
    if(head==NULL || head->next==NULL){
        return head;
    }

    // break linked list into 2 halves, after finding mid
    Node* mid = findMid(head);
    cout<<"Inside merge sort function after mid find : "<< mid<<endl;
    Node* left = head;
    Node* right = mid->next;
    mid->next=NULL;
    cout<<"After first section : "<<endl;

    // recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    cout<<"After second section : "<<endl;

    // merge both left and right halves
    Node * ans = merge(left,right);
    cout<<"After last section : "<<endl;
    return ans;
}
int main(){
     
    Node* node = new Node(23);
    Node* head = node;
    Node* Tail = node;

    insertAtEnd(head, Tail,2);
    insertAtEnd(head, Tail,13);
    insertAtEnd(head, Tail,12);
    insertAtEnd(head, Tail,84);
    insertAtEnd(head, Tail,33);

    print(head);
    
    Node* ansHead = mergeSort(head);

    print(ansHead);


    return 0;
}