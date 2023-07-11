#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>


using namespace std;

int main(){
    // // Array stl;
    // array<int, 4> arr ={1,2,3,4};
    // int size = arr.size();
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<endl;
    // }    
    // cout<<"Element at 2nd Index-> "<<arr.at(2)<<endl;
    // cout<<"Empty or not-> "<<arr.empty()<<endl;
    // cout<<"First Element-> "<<arr.front()<<endl;
    // cout<<"Last Element-> "<<arr.back()<<endl;

    // // Vector stl; 

    //     //initialization;
    // vector<int> v;

    // vector<int> a(6/*size*/, 0/*value for all element*/);

    // cout<<"print a "<<endl;
    // for(int i:a){
    //     cout<<i<<" ";
    // }cout<<endl;
    // vector<int> last(a);
    // cout<<"print last "<<endl;
    // for(int i:last){
    //     cout<<i<<" ";
    // }cout<<endl;


    // //capacity increment
    // cout<<"Size -> "<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"Size -> "<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"Size -> "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Size -> "<<v.capacity()<<endl;


    // cout<<"Size -> "<<v.size()<<endl;

    // cout<<"Element at 2nd Index : "<<v.at(2)<<endl;

    // cout<<"Front "<<v.front()<<endl;
    // cout<<"Back "<<v.back()<<endl;

    // cout<<"before pop : "<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v.pop_back();
     
    // cout<<"after pop : "<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<"begin ";
    // v.begin();
    // cout<<" end ";
    // v.end();
    // // cout<<"after pop : "<< v.begin()<<" end "<<v.end();
    // v.clear();
    // cout<<endl<<"after clear size "<<v.size()<<endl;


    // // Deque;

    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);

    // for(int i:d){
    //     cout<<i;
    // }

    // // d.pop_front();
    
    // cout<<endl;
    // // d.pop_back();
    
    // cout<<"Print first Index element : "<<d.at(1)<<endl;

    // cout<<"front "<<d.front()<<endl;
    // cout<<"back "<<d.back()<<endl;

    // cout<<"Empty or not "<<d.empty()<<endl;
    // cout<<"before erase "<<d.size()<<endl;
    // d.erase(d.begin(), d.begin()+1);
    // cout<<"before erase "<<d.size()<<endl;


    // // list 
    // list<int> l;
    // list<int> n(5, 100); 
    // for(int i:n){
    //     cout<<i<<" ";
    // }cout<<endl;
    // l.push_back(1);
    // l.push_front(2);

    // for(int i:l){
    //     cout<<i<<" ";
    // }

    // cout<<endl;
    // l.erase(l.begin());
    // cout<<"after erase "<<endl;
    // for(int i:l){
    //     cout<<i<<" ";
    // }

    // cout<<"size of list : "<<l.size()<<endl;


    // //stack  
    // stack<string> s;
    // s.push("none");
    // s.push("home");
    // s.push("harshit");
    // stack<int> s2;
    // s2.push(9);
    // s2.push(2);
    // s2.push(98);
    // cout<<"s2 top Element "<<s2.top()<<endl;
    // stack<int> s3(s2);
    // cout<<"s3 top element "<<s3.top()<<endl;
    // cout<<"Top Element ->"<<s.top()<<endl;

    // s.pop();
    // cout<<"Top Element -> "<<s.top()<<endl;
    // cout<<"size of stack"<<s.size()<<endl;

    // cout<<"Empty or Not "<<s.empty();
     



    // //queue stl
    // queue<string> q;
    // q.push("The");
    // q.push("Harshit");
    // q.push("Singh");

    // cout<<"before pop size "<<q.size()<<endl;

    // cout<<"Frist Element "<<q.front()<<endl;
    // q.pop();
    // cout<<"First Elemnt after pop "<<q.front()<<endl;

    // cout<<"Size after pop "<<q.size()<<endl;





    // // Priority Queue stl;
    // priority_queue<int> maxHeap;  // max heap initialization

    // priority_queue<int, vector<int>, greater<int> >  minHeap;  // min heap initialization

    // maxHeap.push(2);
    // maxHeap.push(5);
    // maxHeap.push(0);
    // maxHeap.push(3);

    // int n = maxHeap.size();

    // for(int i=0; i<n; i++){
    //     cout<<maxHeap.top()<<" ";
    //     maxHeap.pop();
    // }cout<<endl;

    // minHeap.push(2);
    // minHeap.push(5);
    // minHeap.push(0);
    // minHeap.push(3);
    // minHeap.push(7);
    // minHeap.push(1);

    // int m = minHeap.size();

    // for(int i=0; i<m; i++){
    //     cout<<minHeap.top()<<" ";
    //     minHeap.pop();
    // }cout<<endl;

    // cout<<"Empty or not : "<<minHeap.empty();





//     // set stl
//     set<int> s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(0);
//     s.insert(3);

//     for(auto i:s){
//         cout<<i<<endl;
//     }cout<<endl;

// set<int> :: iterator m = s.begin();
// m++;
//     s.erase(m);

//     for(auto /*can use int*/ i:s){
//         cout<<i<<endl;
//     }cout<<endl;

//     cout<<" 3 and -3 is present respectivly : "<<s.count(3) << " "<<s.count(-3);


//     set<int>:: iterator itr = s.find(5); // here itr take reference of set element

//     for(auto m = itr; m!=s.end(); m++){
//         cout<<*m<<" ";  // by reference access element use *->pointer;

//     }cout<<endl;






    // Map stl 
    map<int,string> m;
    m[1]="harshit";
    m[13] = "The ";
    m[2]="Singh";

    m.insert({5,"raj"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13 ->"<<m.count(13)<<endl;

    // m.erase(13);
    cout<<"after erase "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);
    
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }


}