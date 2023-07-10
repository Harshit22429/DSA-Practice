#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done " << endl;
}
int arrMin(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if(arr[i]<mini){
        //     mini=arr[i];
        // }
        mini = min(arr[i], mini);
    }
    return mini;
}

int arrMax(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if(arr[i]>maxi){
        //     maxi= arr[i];
        // }
        maxi = max(arr[i], maxi);
    }
    return maxi;
}
bool keyIsPresent(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    // // Array==> single similar type of integer and all values stored into contiguous memory location  and array's variable name represent location of first element
    // int arr[5];
    // std:fill_n(arr,5,-1);
    // cout<<arr[0]<<" "<<arr[3];

    // // find min and max elemnet in given array
    // int arr[4];
    // for ( int i=0; i<4; i++){
    //     cin>>arr[i];
    // }
    // printArr(arr,4);
    // int mini= arrMin(arr, 4);
    // int maxi = arrMax(arr, 4);
    // cout<<"Min of arr : "<<mini<<" Max of arr : "<<maxi;

    // // find given element is present into array or not;
    // int arr[10];
    // int key;
    // cin>>key;
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }
    // printArr(arr, 10);
    // int ans = keyIsPresent(arr, 10, key);
    // cout<<"ans is   ==>  "<<ans<<"   into array";

    // // reverse an array;
    int arr[5];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"print array before reverse :";
    printArr(arr,5);
    reverseArr(arr, 5);
    cout<<"print array after reverse :";
    printArr(arr,5);
}