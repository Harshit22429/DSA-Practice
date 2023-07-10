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

void selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        // int mini = INT_MAX;
        for(int j=i+1; j<size; j++){
            if(arr[j]<=arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);       
    }
}


int main(){
    int arr1[7];
    inputArr(arr1, 7);
    cout<<"Before sorting : "<<endl;
    printArr(arr1,7);
    selectionSort(arr1, 7);
    cout<<"After sorting : "<<endl;
    printArr(arr1,7);


}