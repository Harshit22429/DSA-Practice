#include <iostream>
using namespace std;

void update2(int& x){
    x++;
}
void update1(int x){
    x++;
}
int main(){

    // declaration of reference variable 
    int i =9;
    int& j = i;
     
    cout<<"i and j "<<i <<" and "<<j<<endl;
    i++;
    cout<<"After increment i : i and j "<<i<<" and "<<j<<endl;
    j++;
    cout<<"After increment j : i and j "<<i<<" and "<<j<<endl;


    // why and reason -> when want to pass a variable in function as a reference not copy then use this concept
    cout<<endl<<endl;
    int x =6;
    cout<<"before function x "<<x<<endl;
    update1(x);
    cout<<"After pass by value function x "<<x<<endl<<endl;
    cout<<"before function x "<<x<<endl;
    update2(x);
    cout<<"After pass by reference function x "<<x<<endl;


    cout<<endl<<endl;
    char ch = 'a';
    cout<<"char size : "<<sizeof(ch)<<endl;
    char* p = &ch;
    cout<<"pointer size : "<<sizeof(p)<<endl;

}