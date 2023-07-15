#include <iostream>
using namespace std;

// defining or creating MACRO
#define PI 3.14

// Global variable
int score = 15;

int a(int x){
    score++;
    cout<<endl<<"inside a : "<<score<<endl;
}


// inline function
inline int getMax(int& a, int& b){
   return (a>b) ? a: b; // basically compiler let one line statement function as inline function not more than 3 lines.
}


// Default Argument
void print(int arr[], int size, int start=2){
    for(int i=start; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){

    //Macros
    int r =3;
    // double pi =3.14;
    double area = PI * r * r;
    cout<<"Area is "<<area;


    //Global Variable
    cout<<endl<<endl;
    int n =4;
    a(n);
    cout<<"main function : "<<score<<endl; // score variable not defined into main function scope but useable because of global variable


    
    // inline function benificial for space and redable
    cout<<endl<<endl;
    int a=2, b=4;
    int ans = getMax(a,b);

    cout<<"Greater number is : "<<ans<<endl;
    a=a+4;
    b=b+1;
    ans=getMax(a,b);
    cout<<"Greater number is : "<<ans<<endl;




    //Default argument
    cout<<endl<<endl;
    int arr[6]={1,2,3,4,5,6};
    print(arr,6,1); // this is a function which has start as a default variable with value 2.




}