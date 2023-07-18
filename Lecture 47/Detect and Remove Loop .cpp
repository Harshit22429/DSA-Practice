#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //deconstructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for data : "<<value<<endl;
    }
};


void insertNodeAfterElement(Node* &Tail,int element, int d){
    //creation of new node
    Node* newNode = new Node(d);
    // cout<<Tail->data<<" "<<element<<endl;
    //empty list
    if(Tail==NULL){    
        // cout<<"Inside tail null"<<endl;
        Tail=newNode;
        newNode->next=newNode;
    }
    else{
        // if tail is given element
        if(Tail->data == element){
            // cout<<"Inside tail is element"<<endl;
            newNode->next=Tail->next;
            Tail->next=newNode;
            // Tail = newNode;
            return;
        }
        //create temp pointer to traverse till element
        Node* temp = Tail;
        while(temp->data!=element){
            temp = temp->next;
        }
        //after traversing if temp is last element 
        if(temp->next == NULL){
            //  cout<<"Inside temp->next null"<<endl;
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
//isLoop present function
Node* flodyDetectionLoop(Node* head){

    if(head ==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=slow)
    {
        if(fast==NULL){
            return NULL;
        }
        fast=fast->next;
        if(fast==NULL){
            return NULL;
        }
        fast = fast->next;
        slow=slow->next;
    }
    return fast;
    
}
//starting node of loopint by flody's cycle detection algo
Node* getStarting(Node* head){
    if(head==NULL){
        return NULL;
    }
    // cout<<"Inseide getStart function Tail is "<<head->data<<endl;
    // return NULL;
    Node* intersection = flodyDetectionLoop(head);
    // cout<<intersection->data<<endl;
    // return NULL;
    Node* slow = head;
    cout<<"slow data is "<<slow->data<<" "<<"intersection data is : "<<intersection->data<<endl;
    return NULL;
    while(slow!= intersection){
        // cout<<"Inside while loop"<<endl;
        slow = slow->next;
        intersection = intersection->next;
        cout<<"slow data is "<<slow->data<<" "<<"intersection data is : "<<intersection->data<<endl;
    }
    return slow;
}

void print(Node* Tail){
    if(Tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp =Tail;
    // cout<<Tail->data<<" ";
    do{
        cout<<Tail->data<<" ";
        Tail=Tail->next;
    }while(Tail!=temp);
    cout<<endl;
}


int main(){

    Node* Tail= NULL;
    print(Tail);

    //Insert node
    insertNodeAfterElement(Tail,11,12);
    
    insertNodeAfterElement(Tail,12,13);
    insertNodeAfterElement(Tail,13,15);
    insertNodeAfterElement(Tail,12,16);
    print(Tail);
    
    if(flodyDetectionLoop(Tail)!=NULL){
        cout<<flodyDetectionLoop(Tail)->data<<endl;
        cout<<"Linked list has loop : "<<endl;
    }else{
        cout<<"Linked list hasn't loop : "<<endl;
    }
   


    return 0;
}