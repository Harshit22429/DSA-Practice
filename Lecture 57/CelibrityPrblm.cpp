#include <iostream>
#include<stack>
#include<vector>
using namespace std;

// function to find is there any celebrity or not
int celebrity(vector<vector<int>> mtrx){
    int personCount = mtrx.size();
    stack<int> stk;
    for(int i =0; i<personCount;i++){
        stk.push(i);
    }
    while(stk.size()>1){
        int A = stk.top();
        stk.pop();
        int B = stk.top();
        stk.pop();
        if(mtrx[A][B]==1){
            stk.push(B);
        }else{
            stk.push(A);  
        }
    }
    int potentialElem = stk.top();
    int ans=1;
    for(int i=0;i<mtrx.size();i++){
        if(mtrx[potentialElem][i]!=0 ){
            ans = -1;
            return ans;
        }

    }
    for(int i=0;i<mtrx.size();i++){
        if(mtrx[i][potentialElem]!=1 && potentialElem!=i ){
            ans = -1;
            return ans;
        }
    }
    return ans;
}

int main(){

    vector<vector<int>> mtrx= { {0,1,0},
                                {0,0,0},
                                {0,0,0} };

    int celebrityElement = celebrity(mtrx);
    cout<<"Celebrity element "<<celebrityElement;

    return 0;
}