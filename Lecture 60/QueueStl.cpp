#include <iostream>
#include <queue>
using namespace std;



int main(){

    queue<int> q;
    q.push(11);
    cout<<"front of q is : "<<q.front()<<endl;

    q.push(15);
    cout<<"front of q is : "<<q.front()<<endl;


    cout<<"size of q is : "<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"size of q is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;

    }else{
        cout<<"Queue is not empty "<<endl;
    }

    return 0;
}