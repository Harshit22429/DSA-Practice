 #include <iostream>
 #include <math.h>
 using namespace std;

int main(){

    // // return a signed integer reversed value if it goes out of limit then return 0;
    // int n;
    // cin>>n;
    // int ans=0;
    // while(n!=0){
    //     int digit = n%10;
    //     if( (ans<INT_MIN/10) || (ans > INT_MAX/10)){
    //         ans=0;
    //         break;
    //     }
    //     ans = (ans*10)+digit;
        
    //     n= n/10;
    // }
    // cout<<endl<<ans;

    // // // Complement of base 10 integer; [therer are 2 methods]

    // // //   1
    // // int n, ans,i;
    // // cin>>n;
    // // ans=0;
    // // i=0;
    // // while(n!=0){
    // //     int digit = n&1;
    // //     if(digit==0){
    // //         digit=1;
    // //         ans = pow(2,i)*digit+ans;
    // //     }
    // //     else{
    // //         digit=0;
    // //         ans = pow(2,i)*digit+ans;
    // //     }
    // //     n=n>>1;
    // //     i++;
    // // }
    // // cout<<ans;

    // // //   2
    // int n, ans, mask;
    // cin>>n;
    // if(n==0){
    //     cout<<"1"<<endl<<endl;
    // }
    // int m=n;
    // ans=0;
    // mask=0;
    // while(m!=0){
    //     mask=(mask<<1)|1;
    //     m=m>>1;        
    // }
    // ans=(~n)&mask;
    // cout<<ans;




    // Power of two [ return "true if given no. is power fo two. Otherwise, return False"]

    int n, ans, range;
    cin>>n;
    ans=0;
    range=n/2;
    for(int i=0; i<=range; i++){
        if(pow(2,i)==n){
            ans=1;
            break;
        }
    }
    if(ans==1){
        cout<<"True";
    }else{
        cout<<"False";
    }
}