#include <iostream>
#include <vector>
using namespace std;

void powerSubString(string str, int index, string output, vector<string> &ans)
{

    // Base case
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // Exclude current letter
    powerSubString(str, index + 1, output, ans);

    // Include current letter
    output.push_back(str[index]);
    powerSubString(str, index + 1, output, ans);
}

void powerOfset(vector<int> nums, int index, vector<int> output1, vector<vector<int>> &ans)
{

    // Base case
    if (index >= nums.size())
    {
        ans.push_back(output1);
        return;
    }

    // Exclude
    powerOfset(nums, index + 1, output1, ans);

    // Include
    output1.push_back(nums[index]);
    powerOfset(nums, index + 1, output1, ans);
}

int main()
{

    /*
            //Power of set = set of all subset 2^n where n is no. of elemnts
            vector<int> nums = {1,2,3};
            vector<vector<int>> ans;
            vector<int> output;
            int index =0;
            powerOfset(nums, index, output, ans);
            for(auto i=0; i<ans.size();i++){
                for(int j=0; j<ans[i].size();j++){
                    cout<<ans[i][j]<<" ";
                }cout<<endl;
            }
    */

    // power set of string = set of all substring set 2^n n is letter in string
    cout << "<<" << endl;
    string str = "abc";
    vector<string> ans;
    string output;
    int index = 0;
    powerSubString(str, index, output, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
