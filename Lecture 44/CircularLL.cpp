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
        Node* temp = Tail;
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


//Delete
void deleteNode(Node* &Tail, int value){

    //emptylist
    if(Tail==NULL){
        cout<<"list is empty so no deletion"<<endl;
        return;
    }
    //Tail is value
    
    else{//non-empty
        //assuming that "value is present"
        Node* prev = Tail;
        Node* curr = prev->next;
        while (curr->data!=value)
        {
            prev= curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1 Node Linked List
        if(curr==prev){
            cout<<"1 Node in list"<<endl;
            curr->next=NULL;
            Tail=NULL; 
            delete curr;
            return;
                      
        }
        if(Tail->data==value){
            cout<<" Value is tail's value"<<endl;
            Tail=curr->next;        
        }   
        curr->next=NULL;
        delete curr;
        
    }
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
    print(Tail);
    
    // insertNodeAfterElement(Tail,12,13);
    // print(Tail);
    // insertNodeAfterElement(Tail,13,15);
    // print(Tail);
    // insertNodeAfterElement(Tail,12,16);
    // print(Tail);

    cout<<"Tail node is : "<<Tail->data<<endl;


    //deletion
    deleteNode(Tail,12);
    print(Tail);

    int tailNode = (Tail) ? Tail->data: NULL; // for when list is totally empty
    cout<<"Tail node is : "<< tailNode<<endl;
    return 0;
}