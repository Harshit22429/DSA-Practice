#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>

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


    //stack  
    stack<int> s;
    s.push("none");
    s.push("home");
    s.push("harshit");

    

}