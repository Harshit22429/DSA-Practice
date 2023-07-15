#include <iostream>
using namespace std;


//SayDigits function
void SayDigits(int n){
    string arr[10]={"Zero","One","Two","Threee","Four","Five","Six","Seven","Eight","Nine"};
    /*
            if(n/10==0){
                cout<<arr[n%10]<<" ";
                return;
            }
            SayDigits(n/10);
            cout<<arr[n%10]<<" ";
    */

   //Base case
   if(n==0)
        return ;
    
    //Processing 
    int digit = n%10;
    n = n/10;

    //Recursion call
    SayDigits(n);
    
    cout<<arr[digit]<<" ";
}

// Climbing n'th stairs
int climb_Nth_Stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return climb_Nth_Stairs(n-1)+climb_Nth_Stairs(n-2);
}
// Fibonacci function
int printNfibonacciEle(int n){
    if(n==1){ 
               
        return 0;
    }
    if(n==2){
        return 1;
    }
    return printNfibonacciEle(n-1)+printNfibonacciEle(n-2);
}
int main(){

    /*
            // Print n elements of fibbonaci series;
            int n;
            cin>> n;
            cout<<n<<"th element of fibonacci series is : " <<printNfibonacciEle(n);
    */


    /*
            // Climb till nth stairs and find way of climbing if we can climb at once either one or two stairs
            int n;
            cout<<"Enter no of stairs : ";
            cin>>n;
            cout<<"Ways for climbing is : "<<climb_Nth_Stairs(n);

    */


    // Say Digits e.g.-> i/p:412 o/p:Four One Two
    int number ;
    cout<<"Enter Number to see Digits into english : ";
    cin>>number;
    SayDigits(number);

    return 0;
}