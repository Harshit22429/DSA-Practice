#include<iostream>
using namespace std;

void merge2sort(int* arr, int start, int end ){
    
    int mid = (start+end)/2;

    int len1 = mid-start+1;
    int len2 = end-mid;

    //copy first array
    int* arr1 = new int[len1];
    int mainIndex = start;
    for(int i =0; i<len1; i++){
        arr1[i]=arr[mainIndex++];
    }

    //copy Secode array
    int* arr2 = new int[len2];
    mainIndex=mid+1;
    for(int i =0; i<len2; i++){
        arr2[i]= arr[mainIndex++];
    }
   

   //Merge two sorted array
   int index1 =0;
   int index2 =0;
   mainIndex=start;
   while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[mainIndex++]=arr1[index1++];
        }else{
            arr[mainIndex++]=arr2[index2++];
        }
   }
   while(index1<len1){
    arr[mainIndex++]=arr1[index1++];
   }
   while(index2<len2){
    arr[mainIndex++]=arr2[index2++];
   }

   delete []arr1;
   delete []arr2;

}

void mergeSort(int* arr, int start, int end){
    if(start>=end){
        return;
    }
    int mid = start+(end-start)/2;
    //Left part Recursive call
    mergeSort(arr,start,mid);
    //Right part Recursive call
    mergeSort(arr,mid+1,end);

    // Merging left + right; 
    merge2sort(arr,start,end);
}

int main(){

    // Merge Sort
    int arr[5]={34,64,23,43,5};
    int start=0;
    int end=4;
    mergeSort(arr,start,end);
    for(int i=0; i<=end; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}