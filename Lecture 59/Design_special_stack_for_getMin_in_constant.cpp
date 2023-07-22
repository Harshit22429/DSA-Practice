#include <iostream>
#include <stack>
using namespace std;

class specialStack{

    public:
        stack<int> s;
        int mini;

    public: 

    void push(int data){

        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                int value = 2*data -mini;
                s.push(value);
                mini= data;
            }else{
                s.push(data);
            }
        }
    }

    int pop(){
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        s.pop();
        if(curr>mini){
            return curr;
        }else{
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top(){
        if(s.empty()){
            return -1;
        }
        int curr = s.top();

        if(curr<mini){
            return mini;
        }else{
            return curr;
        }
    }

    bool isEmpty(){
        return s.empty();
    }

    int getMin(){
        if(s.empty()){
            return -1;
        }

        return mini;
    }

};

int main(){

    specialStack stk;
    stk.push(5);
    stk.push(3);
    stk.push(8);
    stk.push(2);
    stk.push(4);

    cout<<"mirst min element " <<stk.getMin()<<endl;
    cout<<"poped element " <<stk.pop()<<endl;
    cout<<"mirst min element " <<stk.getMin()<<endl;
    cout<<"poped element " <<stk.pop()<<endl;
    cout<<"mirst min element " <<stk.getMin()<<endl;
    cout<<"poped element " <<stk.pop()<<endl;


    return 0;
}