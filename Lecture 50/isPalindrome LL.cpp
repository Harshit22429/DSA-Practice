#include <iostream>
#include <vector>
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


// is LL palindrome or not using Array maintain approach
bool isLLPalindromByArr(vector<int>&arr){
    int start=0;
    int end= arr.size()-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// is LL palindrome or not using find middle and reverse after middle approach
bool isLLPalindromByMidReverse(Node* &head){
    Node* temp = head;
    // counting total node of Linked List
    // cout<<" inside counting total"<<endl;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    // finding count of middle node
    // cout<<" inside mid count"<<endl;
    int start=1;
    int mid = (count+start)/2;
    //finding middle node
    // cout<<" inside mid node"<<endl;
    Node* middle= head;
    temp=head;
    while(start<mid){
        middle = middle->next;
        start++;
    }
    // cout<<"MIddle data is "<<middle->data<<endl<<endl;
    // reversing after middle node for comparisanable
    // cout<<" inside 1'st reversing after middle node"<<endl;
    Node* prev=NULL;
    Node* curr = middle->next;
    Node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    middle->next=prev;
    // comparison 
    // cout<<" inside comparision section"<<endl;
    Node* head1= head;
    Node* head2 = middle->next;
    bool ans=true;
    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1= head1->next;
        head2= head2->next;
    }

    // again reverse after middle to make LL original
    // cout<<" inside 2'nd reversing after middle node"<<endl;
    prev=NULL;
    curr = middle->next;
    forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    middle->next=prev;

    return true;
}
int main(){

    Node* node1 = new Node(20);
    Node* head= node1;
    Node* Tail = node1;

    insertAtEnd(head,Tail,30);
    insertAtEnd(head,Tail,40);
    insertAtEnd(head,Tail,40);
    insertAtEnd(head,Tail,30);
    insertAtEnd(head,Tail,120);
    print(head);


/*
    //check palindrome or not approach 1'st.
    vector<int> arr;
    Node* temp= head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    cout<<"LL is palindrome or not using array approach: "<<isLLPalindromByArr(arr)<<endl;
    cout<<"after checking first approach LL is : ";
    print(head);
*/

    // check palindrome or not approach 2'nd.
    cout<<"LL is palindrome or not using after middle reverse approach : "<<isLLPalindromByMidReverse(head)<<endl;
    print(head);
    return 0;
}