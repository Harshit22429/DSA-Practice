#include <iostream>

using namespace std;


int main(){

    // int a=4;
    // int b=6;
    // //and &&
    // // int c =a && b;
    // cout<<(a&b)<<endl;
    // // Or ||
    // cout<<(a|b)<<endl;
    // // Not ~
    // cout<<~a<<endl;
    // //XOR 
    // cout<<(a^b)<<endl;

    // // pre increment
    // int a, b =1;
    // a=10;
    // if(++a){
    //     cout<<b;
    // }
    // else{
    //     cout<<++b;
    // }

    //post increment 

    //pre decrement

    // post decrement

    // int a=1;
    // int b=2;
    // if(a-->0 && ++b>2){
    //     cout<< "Stage1 - Inside If ";
    // }else{
    //     cout<<"Stage2 - Inside else ";
    // }
    // cout<<a << " "<<b<<endl;



    // int a=1;
    // int b=a++;
    // int c=++a;
    // cout<<b << " "<<c;



    // // for loop
    // int n ;
    // cin>>n;
    // int i=1;
    // for(;;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }else{
    //         break;
    //     }
    //     i++;
    // }

    // //  give sum from 1 to n
    // int n, sum;
    // cin>>n;
    // sum=0;
    // for (int i=1; i<=n; i++){
    //     sum+=i;
    // }
    // cout<<sum;


    // // fibonacci series
    // int p=10;
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    // for (int i=0; i<=p; i++){
    //     int nextNumber = a+b;
    //     cout<<nextNumber;
    //     a=b;
    //     b=nextNumber;
    // }


    // break continue


    // for(int i=0; i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // for(int i=0; i<5; i++){
    //     for (int j=i; j<=5; j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i<< " "<<j<<endl;
    //     }
    // }



    // // n=234; 2*3*4=24; 2+3+4=9; 24-9=15; ans=15;
    // int n , pro, sum;
    // pro=1;
    // sum=0;
    // cin>>n;
    // // cout<<n/10;
    // while(n){
    //     pro*=n%10;
    //     sum+=n%10;
    //     n=n/10;
    // }
    // cout<<pro-sum;



    int n, ans;
    cin>>n;
    ans=0;
    while(n!=0){
        if(n%10==1){
            ans+=1;
        }
        n=n/10;
    }
    cout<<ans;

}