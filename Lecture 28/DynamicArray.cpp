#include <iostream>
using namespace std;

int getSum(int arr[], int size){
    int ans =0;
    while(size){
        ans+=arr[size-1];
        size--;
    }
    return ans;
}

void update2(int& x){
    x++;
}
void update1(int x){
    x++;
}
int main(){

    // use stack and Heap both memory which compile time allocated by compiler
    
    /*      int* p = new int;
            char* ch = new char;
    */

    int n ;
    int* arr = new int[n]; // both staack and heap memory used
    cin>>n;
    cout<<"Enter "<<n<<" elements for array : ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
     
    cout<<"Dynamic array sum is : "<<ans<<endl;


}