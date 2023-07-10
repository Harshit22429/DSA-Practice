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

void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        bool swapped = false;
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr1[7];
    inputArr(arr1,7);
    cout<<"Before sorting "<<endl;
    printArr(arr1,7);
    bubbleSort(arr1,7);
    cout<<"After sorting"<<endl;
    printArr(arr1,7);

}