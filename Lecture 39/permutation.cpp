#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int> nums, vector<vector<int>>& ans, int index){


    //Base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        permutation(nums,ans,index+1);
        swap(nums[index],nums[j]);
    }
}
int main(){
    vector<int> nums ={1,2,3,4,5};
    vector<vector<int>> ans;
    int index =0;
    permutation(nums,ans,index);
    for(int i=0; i<ans.size();i++){
        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j]<<"";
        }cout<<endl;
    }
}
