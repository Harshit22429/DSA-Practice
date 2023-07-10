#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // int n ,ans;
    // ans=0;
    // cin>>n;
    // int i=0;
    // while(n!=0){
    //     int bit;
    //     bit = n&1;
    //     cout<<bit<<endl;
    //     ans = (bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<endl<<ans;

    // //  Negative Binary number 
    // int n ,ans, i;
    // cin>> n;
    // ans=0;
    // i=0;
    // while(n!=0){
    //     int bit;
    //     bit = n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n>>1;
    //     i++;
    // }
    // cout<<ans;

    //decimal to  bina
    int n , ans, i;
    cin>>n;
    ans=0;
    i=0;
    while (n!=0)
    {
        int bit = n%10;
        if(bit==1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    } 
    cout<<ans;
}