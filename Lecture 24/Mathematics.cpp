#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int aPowb(int a, int b, int m){
    /*if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    */
    int result =1;  // this handle edge case b==0;
    while(b>0){
    if(b&1){
        result = (1LL*(result)* (a)%m)%m;
    }
    a= (1LL*(a)%m * (a)%m)%m;
    b=b>>1;
    }
    return result;
}
int gcd(int a , int b){
    if(a==b){
        return a;
    }
    if(a==0){
        return b;
    }if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int totalPrime(int n){
    // // Sieve of Eratosthenes
    int ans =0;
    int ansArr[7];
    for(int i=0; i<n+1; i++){
        ansArr[i]=true;
    }
    ansArr[0]=false;
    ansArr[1]=false;
    for(int i = 2; i<n; i++){
        if(ansArr[i]){
            ans++;
            for(int j = i*2; j<n; j=j+i){
                ansArr[j]= false;
            }
        }
    }
    return ans;
}
bool isPrime(int n){
    if(n<=1){
        return 0; 
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){

    vector<int> v = {1,2, 3,4,5,6,7,8,8};
    int limit = floor(sqrt(9))+1;
    v.reserve(limit);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(int i=0; i<=limit+1; i++ ){
        cout<<v[i]<<" ";
    }cout<<endl;




    // int n;
    // cin>>n;
    // if(isPrime(n)){
    //     cout<<"Number is prime.";
    // }else{
    //     cout<<"Number is NotPrime.";
    // }
    // // in following function first hard code ansArr range number  this function use 
    // cout<<endl<<"Total prime number in 0 to "<<n-1<<" range : " <<totalPrime(n); 
    // // [(1/2)+(1/3)+(1/5)+(1/7)+(1/11)+...] -> log(log(n))




    // // // GCD [gretest common Divisor]
    // int a;
    // int b;
    // cout<<"Enter two numbers : ";
    // cin>>a>>b;
    // cout<<a<<" and "<<b<<" GCD is : "<<gcd(a,b);



    // // // Modular Exponential a^b;
    // int a,b,c;
    // cout<<"Enter two numbers for power and third one for modulus : ";
    // cin>>a>>b>>c;
    // cout<<"("<<a<<"^"<<b<<")%"<<c<<" is : "<<aPowb(a,b,c );
    
    

    

    // // // find factorial of (212!)%m  where m is (10^9)+7;



    
    // // // Checking an address
    // int *p =nullptr; 
    // int *p1=reinterpret_cast<int*>(dummyAddress);
    // // cout<<*p1;
    // cout << "Address: 0x" << std::hex << reinterpret_cast<std::uintptr_t>(p1) << std::endl;
}
