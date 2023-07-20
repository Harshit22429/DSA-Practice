#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// print vector
void print(vector<int> arr){
    int count=0;
    int size = arr.size();
    while(count<size){
        cout<<arr[count]<<" ";
        count++;
    }cout<<endl;
}

// next smaller element 
void nextSmallerElem(vector<int> &arr){
    stack<int> stk;
    stk.push(-1);
    int size=arr.size()-1;
    for(int i=size; i>=0; i--){
        char chArr= arr[i];
        while(stk.top()>=chArr){
            stk.pop();
        }
        arr[i]= stk.top();
        stk.push(chArr);
    }
}


// largest rectangular area in histogram
    //nextSmallerIndexses
vector<int> nextSmallerIndx(vector<int> arr){
        vector<int> ans(arr.size());
        
        stack<int> stk;
        stk.push(-1);

        for(int i=arr.size()-1; i>=0; i--){

            while(stk.top()!=-1 && arr[stk.top()]>=arr[i]){
                stk.pop();
            }
            ans[i]=stk.top();
            stk.push(i);
        }
        return ans;
}
    //nextSmallerIndexses
vector<int> prevSmallerIndx(vector<int> arr){
    vector<int> ans(arr.size());
        
        stack<int> stk;
        stk.push(-1);

        for(int i=0; i<arr.size(); i++){

            while(stk.top()!=-1 && arr[stk.top()]>=arr[i]){
                stk.pop();
            }
            ans[i]=stk.top();
            stk.push(i);
        }
        return ans;
}
int largestRectangularArea(vector<int> arr){
    int arrSize = arr.size();

    vector<int> next(arrSize);
    next = nextSmallerIndx(arr);
    cout<<"nextSmallerIndx : ";
    print(next);

    vector<int> prev(arrSize);
    prev = prevSmallerIndx(arr);
    // cout<<"prevSmallerIndx : ";
    // print(prev);

    int maxAns = INT_MIN;

    for(int i=0; i<arr.size(); i++){
        if(next[i]==-1){
            next[i]=arrSize;
        }
        int b= next[i]-prev[i]-1;
        int l = arr[i];

        maxAns= max((b*l),maxAns);
        
    }
    return maxAns;

}



int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);

    print(arr);

/*
    //next smaller element of array's element
    nextSmallerElem(arr);
    print(arr);
*/

    //Largest Rectangular area in histogram
    vector<int> v;
    cout<<"largest rectangular area in histogram : "<<largestRectangularArea(arr)<<endl;

    return 0;
}