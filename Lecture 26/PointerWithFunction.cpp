#include <iostream>
using namespace std;

int getSum(int arr[] /*inspite of arr[] also define as *arr */, int size){
    int sum =0;
    for(int i =0; i<size; i++){
        sum +=arr[i];   /* inspite of arr[i] also use i[arr] because 
                               arr[i]==*(arr+1) 
                            OR i[arr]==*(i+arr)    */
    }
    return sum;
}
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    p=p+1;
    cout<<"inside p "<<p<<endl;
    // *p=*p+1;

}
int main(){


    /*        int value =5;
            int *p =&value;

            // print(p);


            cout<<"Before p increment "<< p <<endl;
            // cout<<"Before *p increment "<< *p <<endl;
            update(p);
            cout<<"After p increment "<< p <<endl;
            // cout<<"After *p increment "<< *p <<endl;

    */

    // // get sum of array;
    int arr[6] = {1,2,3,4,5,8};
    int ans = getSum(arr+2,4);
    cout<<"Sum is "<<ans<<endl;

    return 0;


}