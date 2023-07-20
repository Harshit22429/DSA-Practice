#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
            this->size = size;
            arr = new int [size];
            top=-1;
        }

    void push(int data){
        if(top>size){
            cout<<"Stack is overflow "<<endl;
            return;
        }else{
            top++;
            arr[top]=data;
            cout<<"Data pushed : "<<endl;
        }
    }

    void pop(){
        if(top<0){
            cout<<"Stack is underflow "<<endl;

        }else{
            top--;
            cout<<"Data from stack poped. ";
        }
    }

    int peak(){
        if(top<0){
            cout<<"Stack has no element "<<endl;
            return -1;
        }
        else if( top>size){
            int peak = top-1;
            return arr[peak];
        }
        else{
            return arr[top];
        }
    }
    
    bool isEmpty(){
        if( top<0){
            return 1;
        }else{
            return 0;
        }
    }

};


int main(){

/*
    stack<int> s;
    s.push(2);
    s.push(3);
    cout<<"size of stack : "<<s.size()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
*/

    // stack implimentation
     
    // using array
    Stack st(5);
    st.push(32);
    st.push(98);
    st.push(57);
    cout<<"stack is empty or not: " <<st.isEmpty()<<endl;
    cout<<endl<<st.peak()<<endl;
    st.pop();
    cout<<endl<<st.peak()<<endl;
    st.pop();
    cout<<endl<<st.peak()<<endl;
    st.pop();
    cout<<endl<<st.peak()<<endl;
    cout<<"stack is empty or not: " <<st.isEmpty()<<endl;
    return 0;
}