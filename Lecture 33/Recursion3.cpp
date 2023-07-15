#include <iostream>
using namespace std;

//Binary Search by Recursion
bool isPresentUsingBS(int arr[], int start, int end, int key){

    //Base case 
    if(start>end){
        return false;
    }
    int mid = start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }else if ( arr[mid]<key){
        start=mid+1;
        return isPresentUsingBS(arr,start,end,key);
    }else{
        end=mid-1;
        return isPresentUsingBS(arr,start,end,key);
    }

}

//Linear search by Recursion
bool isPresent(int arr[], int size, int key){

    //Base case 
    if(size==0){
        return 0;
    }
    if(size==1 && arr[0]!=key){
        return 0;
    }

    //Small problem
    if(arr[0]==key){
        return true;
    }
    //Recursive call
    return isPresent(arr+1,size-1, key);
}

// get Sum function
int getSum(int arr[], int size){

    //Base case 
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    //Recursion call    
    return arr[0]+getSum(arr+1, size-1);;
    //
}

// is sorted function
bool isSorted(int arr[], int arrSize, int size=0){


    /*
                //Base Case
                if(size>=arrSize){
                    return true;
                }
                if(arr[size]>arr[size+1]){
                    return false;
                }

                //Processing
                size++;

                //Recursion call
                isSorted(arr,arrSize,size);
    */

// Love code

   //Base case
   if(arrSize==0 || arrSize==1){
    return true;
   }
   if(arr[0]>arr[1]){
    return false;
   }else{
    //Recursion Call
    isSorted(arr+1,arrSize-1);
   }


}

int main(){


    /*
            // Check array is sorted or not 
            int n; 
            cout<<"Enter size of dynamic array : ";
            cin>>n;
            int* arr=new int[n];
            cout<<"Enter "<<n<<" elements for array : ";
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }

            cout<<"Array is sorted or not : "<<isSorted(arr,n)<<endl;
            //releasing dynamic allocation or Heap Memory
            delete []arr;
    */

    /*
            // Sum of array's element by recursion
            int arr[4]={3,5,7,10};
            int ans = getSum(arr,4);
            cout<<"Sum of array is : "<<ans;
    */



    /*
            // Searching by Recursion using linear search
            int arr[5]={3,6,1,0,8};
            int key;
            cin>>key;
            cout<<"Element is present or not in array : "<<isPresent(arr,5,key);
    */

    // Searching By Recursion using Binary Search
    int arr[5]={0,1,3,6,8};
    int key;
    cin>>key;
    cout<<"Element is present or not in array : "<<isPresentUsingBS(arr,0,4,key);


   return 0; 
}