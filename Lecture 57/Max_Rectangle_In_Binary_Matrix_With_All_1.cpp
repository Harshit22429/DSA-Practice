#include <iostream>
#include <vector>
#include <stack>
using namespace std;


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
    // cout<<"nextSmallerIndx : ";

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


// Max Rectangle in Binary Matrix with all 1's
int maxRectangleInBinaryMatrix(vector<vector<int>> M, int n, int m){
    int ansArea=0;
    vector<int> arr;
    for(int i=0; i<M.size();i++){
        arr.push_back(M[0][i]);
    }
    ansArea = largestRectangularArea(arr);

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(M[i][j]!=0){
                M[i][j] = M[i][j] + M[i-1][j];
            }
            else{
                M[i][j]=0;
            }
        }
        ansArea = max(ansArea, largestRectangularArea(M[i]));
    }
    return ansArea;
}

int main(){
    cout<<"Welcome to code"<<endl;
    vector<vector<int>> M = { {0,1,1,0},
                              {0,0,1,1},
                              {1,1,0,1},
                              {1,1,1,1} };
    int n = M.size();
    int m = M[1].size();
    cout<<"n and m is "<<n<<", "<<m<<endl;
    int maxArea = maxRectangleInBinaryMatrix(M,n,m);

    cout<<" Max Rectangle in Binary Matrix with all 1's : "<<maxArea<<endl;




    return 0;
}