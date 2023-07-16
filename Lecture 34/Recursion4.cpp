#include<iostream>
using namespace std;

void sortArray(int* arr, int size){
    
    //Base case
    if(size==0||size==1){
        return;
    }

    // Small proble or solve 1 step
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recursive call
    sortArray(arr, size-1);
}

int power(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(b&1){
        return a*power(a,b/2)*power(a,b/2);
    }else{
        return power(a,b/2)*power(a,b/2);
    }
}

void reverseString(string& s, int start, int end){
    if(start>end){
        return ;
    }
    end--;
    swap(s[start],s[end]);
    start++;
    
    reverseString(s, start, end);
}

int main(){

    // Reverse a string using Recursion
    string s="Harshit";
    
    cout<<s[0]<<endl;
    reverseString(s,0,s.length());
    cout<<s<<endl;



    //check pallindrome or not using recursion



    // // power of a^b;
    cout<<endl<<endl;
    int a=2;
    int b=5;
    int ans = power(a,b);
    cout<<"Ans is : "<<ans<<endl;



    //Bubble sort using recursion call
    int arr[4]={0,9,6,0};
    sortArray(arr,4);
    for(int i=0; i<4;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}