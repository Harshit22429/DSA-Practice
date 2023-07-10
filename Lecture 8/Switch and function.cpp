#include <iostream>
using namespace std;

bool isEven(int num){
        if(num%2==0){
            return true;
        }
        else{
            return false;
        }

    }
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
    fact = fact*i;
    }
    return fact;

}
int nCr(int n, int r){
    int x=factorial(n);
    int y=factorial(r)*factorial(n-r);

    int ans = x/y;
    return ans;

}

void printCounting(int num){
    for(int i=1; i<=num;i++){
        cout<<i<<endl;
    }
}

int isPrime(int num){
    for (int i=2; i<num;i++){
        if(num%2==0){
            return 0;
        }
    }
    return 1;
    
}
int main(){

    /*
        switch(expression){
            case (constant):{
                break;
            };
            case (constant):{
                continue;
            };
            case (constant):{
                break;
            };
            default:{
                break;
            }
        }
        //In this switch case can use nested switch;
    */





   // // Trail
//    int num=1;
//    switch(num){
//     case 1: cout<<" first "<<endl;
//     case 2: {cout<<" second"<<endl;
//             break;
//     }
//     default:{
//         cout<<"default case "<<endl;
//     }
//    }
    


    // // // calculator pyara sa;

    // int a, b;
    // cout<<"enter the value of a"<<endl;
    // cin>>a;
    // cout<<"enter the value of b"<<endl;
    // cin>>b;
    // char op;
    // cout<<"enter the operation you want to perform : "<<endl;
    // cin>>op;
    // switch(op){
    //     case '+':{
    //         cout<<a+b<<endl;
    //         break;
    //     }
    //     case '-':{
    //         cout<<a-b<<endl;
    //         break;
    //     }
    //     case '*':{
    //         cout<<a*b<<endl;
    //         break;
    //     }
    //     case '/':{
    //         cout<<a/b<<endl;
    //         break;
    //     }
    //     default:{
    //         cout<<"Enter correct values."<<endl;
    //     }
    // }



    // find 1330 rupees how much notes are needed of 100's, 50's, 20's, 1's.


    // // function for even or odd;
    // int n;
    // cin>>n;
    // cout<<isEven(n);


    // // // nCr function
    // int n,r;
    // cin>>n;
    // cin>>r;
    // int ans = nCr(n,r);
    // cout<<ans;


    // // // print counting from 1;
    // int n ;
    // cin>>n;
    // printCounting(n);


    // // prime function;
    int n;
    cin>>n;
    cout<<isPrime(n);
}