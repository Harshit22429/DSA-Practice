#include <iostream>
#include <cstring>
using namespace std;

class NStack{

    public: 
        int *arr;
        int *top;
        int *next;
        int s,n;
        int freeSpot;

    // constructor
    NStack(int S, int N){
        s=S;
        n=N;
        arr= new int[s];
        top= new int[n];
        next= new int[s];

        //initialize top array
        memset(top, -1, n);

        //initialize next array
        for(int i=0; i<s; i++){
            next[i]=i+1;
        }
        next[s-1]=-1;

        freeSpot= 0;
    }

    bool push(int element, int stackNum){
        //check overflow 
        if(freeSpot==-1){
            return false;
        }
        
        // find index where element insert
        int index = freeSpot;
        //update freespot
        freeSpot= next[index];
        //store element into array
        arr[index]= element;

        //update next when any element present in array then next behaviour change and it point to index of next element after stack top
        next[index] = top[stackNum-1];

        // update top array which point to stack's top element index
        top[stackNum-1]= index;

        return true;
    }


    int pop(int stackNum){
        int ans;
        //check underflow
        if(top[stackNum-1]==-1){
            ans= -1;
            return ans;
        }

        //find index which is top of stack
        int index= top[stackNum-1];

        //update top array which point top element's index after this pop. which is stored into next array because if any element in array then next array hold index of next element after stack top
        top[stackNum-1]=next[index];

        //update next array 
        next[index]= freeSpot;

        // update freeSpot now free spot is point to poped element index
        freeSpot = index;

        return arr[index];
    }
};

int main(){

    NStack nStack(6,3);
    cout<<"first elem into first stack insert : "<<nStack.push(10,1)<<endl;
    cout<<"first elem into first stack insert : "<<nStack.push(20,1)<<endl;
    cout<<"first elem into first stack insert : "<<nStack.push(30,2)<<endl;

    cout<<"pop first array element "<<nStack.pop(1)<<endl;
    cout<<"pop first array element "<<nStack.pop(1)<<endl;
    cout<<"pop first array element "<<nStack.pop(2)<<endl;
    cout<<"pop first array element "<<nStack.pop(1)<<endl;



    return 0;
}