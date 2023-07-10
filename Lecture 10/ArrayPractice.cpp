#include <iostream>
#include <vector>
using namespace std;

int arrInput(int arr[], int size)
{
    cout<<"Enter the array of size : "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int swapAltArr(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Array printing Done" << endl;
}

int uniElemInArr(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = (ans ^ arr[i]);
    }    
    return ans;
}
int dupArr(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=(ans^arr[i]);
    }
    for(int i=1; i<size; i++){
        ans=(ans^i);
    }
    return ans;
}
int arrInsertion(int arr1[], int size1, int arr2[], int size2){

    vector<int> ans;
    
    // // first approach nested looping ; this not 100% correct
    // for(int i=0; i<size1; i++){
    //     int temp = arr1[i];
    //     for(int j=0; j<size2; j++){
    //         if(arr2[j]>temp){
    //             break;
    //         }
    //         if(arr2[j]==temp){
    //             ans.push_back(arr2[j]);
    //         }
    //     }
    // }
    // for(int i=0; i<3; i++){
    //     cout<<ans[i]<<endl;
    // }

    // // second optimized approach two pointer approach;
    int i =0;
    int j=0;
    while(i<size1 & j<size2){
        if(arr1[i]==arr2[j]){
            // cout<<"For "<<arr1[i];
            ans.push_back(arr1[i]);
            arr1[i]=INT_MIN;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    for(int n=0; n<sizeof(ans); n++){
        cout<<ans[n]<<" ";
    }

}
int sortOne(int arr[], int size){
    int start =0;
    int end=size-1;
    while(start<=end){
        if(arr[start]==0){
            start++;
        }else if(arr[end]==1){
            end--;
        }else if(arr[start]==1 && arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }else if(arr[start]==0 && arr[end]==0){
            start++;
        }else if (arr[start]==1 && arr[end]==1){
            end--;
        }
    }
}
int main()
{

    // // swap alternative;
    // int arr1[5];
    // arrInput(arr1, 5);
    // cout<<"Array printing before swapping : ";
    // printArr(arr1, 5);
    // swapAltArr(arr1, 5);
    // cout<<"Array printing after alternative swapping : ";
    // printArr(arr1, 5);

    // // find unique element into array;
    // // int a = 4;
    // // int b = 3;
    // // cout << ((a ^ a) ^ b);
    // int arr2[9];
    // arrInput(arr2, 9);
    // printArr(arr2,9);
    // cout << uniElemInArr(arr2, 9);





// H. W.  // return true if all element's occurance number is unique;





    // // find duplicate element into array; when all element in range [1,n-1] in array at once.
    // int arr3[7];
    // arrInput(arr3, 7);
    // printArr(arr3,7);
    // cout<<dupArr(arr3,7);





// H. W.  //find all duplicate in array;




    // // two array insertion; sorted in non-decreasing order
    // int arr4[5];
    // int arr5[3];
    // arrInput(arr4,5);
    // printArr(arr4,5);
    // arrInput(arr5,3);
    // printArr(arr5,3);
    // arrInsertion(arr4, 5, arr5, 3);

 
 
    // pair sum




    // triplet sum;

    // sort array of 0's and 1's;
    int arr10[8];
    arrInput(arr10,8);
    cout<<"Before sorting : ";
    printArr(arr10,8);
    sortOne(arr10,8);
    cout<<"After sorting : ";
    printArr(arr10,8);
}