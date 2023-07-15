#include <iostream>
using namespace std;

//Tail Recursion
void printTail(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printTail(n-1);
}

//Head Recursion
void printHead(int n){
    if(n==0){
        return ;
    }
    printHead(n-1);
    cout<<n<<endl;
}

//power function
int power(int n ){
    if(n==0){
        return 1;
    }
    
    return 2*power(n-1);
}

//factorial function
int factorial(int n){
    // if(n==0){
    //     return 1;
    // }
    return n* factorial(n-1);;
}

int main(){

    /*        // Factorial 
            int n;
            cin>>n;
            int ans = factorial(n);
            cout<<"Ans is "<<ans<<endl;

    */


    /*        // 2^n function
            int n;
            cin>>n;
            cout<<"2^"<<n<<" is : "<<power(n);

    */

   // Tail and Head recursion printing
    int n;
    cin>>n;
    cout<<endl; 
    //Tail recursion
    printTail(n);
    cout<<endl;
    //Tail recursion
    printHead(n);


    return 0;

}