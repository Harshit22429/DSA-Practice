#include <iostream>
#include <vector>

using namespace std;

void inputArr(int arr[], int size)
{
    cout << "Enter an array of size : " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " Array printing DONE." << endl;
}

void reverseArr(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i =0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

void moveZero(int arr[], int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==0){
            for(int n = i+1; n<=j; n++){
                arr[n-1]=arr[n];

            }
            arr[j]=0;
            j--;
        }
        else{
            i++;
        }
    }
}

void moveZeroOptimize(int arr[], int size){
    int nonzero =0;
    for(int j=0; j<size; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[nonzero]);
            nonzero++;
        }
    }
}

int main()
{

    // // Reverse an array
    // int arr1[7];
    // inputArr(arr1,7);
    // cout<<"before revese ";
    // printArr(arr1,7);
    // reverseArr(arr1,7);
    // cout<<"after revese ";
    // printArr(arr1,7);

    // // merge two sorted array
    // int arr2[5] = {1, 3, 5, 7, 9};
    // int arr3[3] = {2, 4, 6};

    // int arr4[8] = {0};

    // merge(arr2,5,arr3,3,arr4);
    // printArr(arr4,8);



    // move zero to right and preserve non-zero's order;
    int arr5[7]={6,1,0,3,0,12,9};
    // moveZero(arr5,1);  // T.C. O(n^2)
    moveZeroOptimize(arr5,7);  // T.C. O(n)
    printArr(arr5,7);

}