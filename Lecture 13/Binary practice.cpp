#include <iostream>
using namespace std;


void inputArr(int arr[] , int size){
    cout<<"Enter an array of "<<size<<endl;
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }
}
void printArr(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<< "Array printing Done."<<endl;
}
int firstOccr(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int ans =0;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==key){
            ans= mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
    }
    return ans;
}
int lastOccr(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int ans =0;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==key){
            ans= mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
    }
    return ans;
}
int peakElem(int arr[], int size){
    int start =0; 
    int end =size-1;
    int ans=0;
    while(start<end){       // // remember here use < inspite of <= 
        int mid = start + (end-start)/2;
        if(arr[mid]<arr[mid+1]){
            ans=mid+1;
            start=mid+1;
        }else{
            ans = mid;
            end=mid;
        }
    }
    return ans;
}

int lowerPivot(int arr[], int size){
    int start =0;
    int end = size-1;
    int ans =0;

    while(start<end){
        int mid = start +(end-start)/2;
        
        if(arr[mid]>=arr[0]){
            start = mid+1;
            ans = mid+1;
        }else if(arr[mid]<=arr[end]){
            end=mid;
            ans=mid;
        }
    }
    return arr[ans];

    // while(start<end){
    //     int mid = start + (end-start)/2;

    //     if(arr[mid]>=arr[0]){
    //         start = mid+1;
    //     }else{
    //         end = mid;
    //     }
    // }
    // return start;
}
int upperPivot(int arr[], int size){
    int start =0;
    int end = size-1;
    while(start<end){
        int mid = (start+end)/2;
        if(arr[mid]>=arr[0]){
            start = mid;
        }else if( arr[mid]<=arr[end]){
            end = mid-1;
        }
    }
    return arr[end];
}
int main(){

    // // First and Last Position of an element in sorted array ;
    // int arr1[7], key;
    // inputArr(arr1, 7);
    // printArr(arr1, 7);
    // cout<<"Enter the key value : ";
    // cin>>key;
    // int firstOccur=firstOccr(arr1, 7, key);
    // int lastOccur= lastOccr(arr1, 7, key);
    // cout<<key<<"first occur in array is : "<<firstOccur<<" last occur in array is : "<<lastOccur<<endl;



    // // // Find peak value in mountain array; there is at least 3 elements in array.
    // int arr2[9];
    // inputArr(arr2,9);
    // printArr(arr2,9);
    // int peakIndex =peakElem(arr2,9);
    // cout<<"Peak element position is : "<<peakIndex;


    // Pivot in an array;
    int arr3[7];
    inputArr(arr3,7);
    printArr(arr3,7);
    int lowerElem = lowerPivot(arr3,7);
    cout<<"Pivot elem (when let lower is pivot) : "<<lowerElem<<endl;
    int upperElem = upperPivot(arr3,7);
    cout<<"Pivot elem (when let upper is pivot) : "<<upperElem<<endl;

    // search k element in sorted rotated array [ e.g.  arr[7,9,1,2,3] and k=2];
            /* for this solution we have to use pivot element technique. */


}