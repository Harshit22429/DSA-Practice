#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " Array printing DONE." << endl;
}
void rotateArr(int arr[], int size, int k){
    int temp[size];
    for(int i=0; i<size; i++){
        temp[(i+k)%size]=arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    cout << " Array printing DONE." << endl;
}
bool isSortRotated (int arr[], int size){
    int count =0;
    for(int i=0; i<size; i++){
        if(arr[i]>arr[(i+1)%size]){
            count++;
        }
    }
    return count<=1;
    // if(count == 1){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
void reverse(int v[], int size){
    int i =0; 
    int j=size-1;
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
void add2Arr(int arr1[], int size1, int arr2[], int size2){
    vector<int> ans;
    int i=size1-1;
    int j=size2-1;
    int carry =0;
    while(i>=0 && j>=0){
        int sum = arr1[i]+arr2[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
        
    }
    while(i>=0){
        int sum = arr1[i]+ carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        
    }
    while(j>=0){
        int sum =  arr2[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        
    }
    int ansArr[ans.size()];
    for(int i =0; i<ans.size(); i++){
        ansArr[i]=ans[i];
    }
    reverse(ansArr, ans.size());
    for(int i =0; i<ans.size(); i++){
        cout<<ansArr[i]<<" ";
    }cout<<endl;
}
int main(){
    // // rotate an array by given kth increment.
    // int arr1[4]={-1,-100,3,99};
    // int k = 2;
    // rotateArr(arr1, 4, k);


    // // Check array is sorted and rotated;

    // int arr2[5]={3,5,9,1,2};
    // bool ans = isSortRotated(arr2, 5);
    // cout<<"Ans is : "<<ans;


    // Sum of two array;
    int arr3[4]={6,3,7,8};
    int arr4[4]={5,8,3,7};

    add2Arr(arr3,4,arr4,4);
}