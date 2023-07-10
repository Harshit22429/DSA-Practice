#include <iostream>
using namespace std;

int fullSqrt(int n){
    int start =0;
    int end = n-1;
    int ans =0;
    for(int i=0; i<n;i++){
        int mid = start+(end-start)/2;
        if(mid*mid == n){
            return mid;
        }else if(mid*mid>n){
            end = mid -1;
        }else if( mid*mid<n){
            ans =mid;
            start =mid+1;
        }
    }
    return ans;

}
double preciSqrt(int n, int tempSol, int precision){

    double factor =1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for( double j=ans; j*j<n; j+=factor){
            ans = j;
        }
    }
    return ans;
}
int main(){

    // search k element in sorted rotated array [ e.g.  arr[7,9,1,2,3] and k=2];
            /* for this solution we have to use pivot element technique. */

    

    

    // sqrt for 3 digit precision;
    int n;
    cin>>n;
    int firstPart=fullSqrt(n);
    cout<<"first complete "<<firstPart<<endl;
    double wholeSqrt = preciSqrt(n, firstPart, 3);
    cout<<"Ans is : "<<wholeSqrt;
}