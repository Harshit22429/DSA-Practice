#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    
    //Select pivot element
    int pivot = arr[start];

    //Less than pivot element's count
    int count =0;
    for(int i =start+1; i<=end; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    //swap pivot to it's right place
    int pivotIndex = count+start;
    swap(arr[start],arr[pivotIndex]);

    //Maintain pivot left smaller and right greater elements
    int i=start;
    int j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if((i<pivotIndex) && (j>pivotIndex)){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){

    //Base case 
    if(start>=end){
        return;
    }

    //Partition
    int p = partition(arr,start,end);

    //Recursive call
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}

int main(){

    //Quick Sort
    int arr[10]={1,4,1,-3,0,34,22,-3,-2,0};
    quickSort(arr,0,9);
    for(int i=0; i<=9; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}