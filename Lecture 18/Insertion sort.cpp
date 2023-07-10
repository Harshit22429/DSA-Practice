#include <iostream>
using namespace std;


void inputArr(int arr[], int size){
    cout<<"Enter an array of size : "<<size<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" Array printing DONE."<<endl;
}
void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j]; // shift array element
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp; // temp value stored at last comparisioned value's right side.
        
    }
}

int main(){

    int arr1[7];
    inputArr(arr1,7);
    cout<<"Before sorting"<<endl;
    printArr(arr1,7);
    insertionSort(arr1,7);
    cout<<"After sorting"<<endl;
    printArr(arr1,7);
}