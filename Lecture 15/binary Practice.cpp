#include <iostream>
using namespace std;

void inputArr (int arr[], int size){
    cout<<"Enter an array of size : "<<size<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

bool isPosible(int arr[], int mid,int size, int student){
    int studentCount =1;    
    int pageSum =0;

    for(int i =0; i<size; i++){

        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount> student || arr[i]>mid){
                return false;
            }
            else{
                pageSum = arr[i];
            }
        }
    }
    return true;
    
    
    
    
    
    
    
    
    
    // int arrIndex =0;
    // while(studentCount<=student){
    //     int pageSum =0;
    //     for(int i=arrIndex; i<size; i++){
    //         if(pageSum<=mid){
    //             pageSum+=arr[i];
    //             arrIndex=i;
    //             cout<<endl<<"arrIndex is : "<<arrIndex<<endl;
    //         }
    //     }
    //     studentCount++;
    // }
    // if(arrIndex == size){
    //     return true;
    // }else{
    //     return false;
    // }











}

int bookAllocate(int arr[],int size, int student){
    int start = 0;
    int sum =0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPosible(arr,mid,size,student)){
            ans=mid;
            end = mid-1;
        }else{
            start = mid +1;
        }
        // cout<<"ans is : "<<ans<<endl;
    }
    return ans;
}
int main(){
    // book allocation;
    int arr1[4];
    
    inputArr(arr1, 4);
    int student;
    cout<<"Enter total student : ";
    cin>>student;
    int ans = bookAllocate(arr1,4,student);

    cout<<"Minimum allocated books are : "<< ans;
    

    // Pinter's allocation problem;



    // aggresive cow;
    


}