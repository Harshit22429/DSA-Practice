#include <iostream>
using namespace std;

class Stack{
    public: 
    int * arr;
    int top1;
    int top2;
    int size;

    // behaviour or constructor
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1= -1;
        top2=size;
    }
    

    void push1(int element){
        if(top2-top1>1){
            top1=top1+1;
            arr[top1]= element;
        }else{
            cout<<" Stack is overflow"<<endl;
        }
    }

    void push2(int element){
        if(top2-top1>1){
            top2= top2 -1;
            arr[top2]= element;
        }
    }

    void pop1(){
        if(top1>=0){
            top1--;
        }else{
            cout<<"Stack is underflow"<<endl;
        }
    }

    void pop2(){
        if(top2<size){
            top2++;
        }else{
            cout<<"Stack is underflow"<<endl;
        }
    }

    bool isEmpty(){
        if(top1==-1 && top2==size){
            return 1;
        }else{
            return 0;
        }
    }
};

int main(){

    Stack st(5);
    st.push1(32);
    st.push2(98);
    st.push2(98);
    st.push1(57);
    cout<<"stack is empty or not: " <<st.isEmpty()<<endl;
    // cout<<endl<<st.peak()<<endl;
    st.pop2();
    // cout<<endl<<st.peak()<<endl;
    st.pop1();
    // cout<<endl<<st.peak()<<endl;
    st.pop1();
    // cout<<endl<<st.peak()<<endl;
    cout<<"stack is empty or not: " <<st.isEmpty()<<endl;



    return 0;
}