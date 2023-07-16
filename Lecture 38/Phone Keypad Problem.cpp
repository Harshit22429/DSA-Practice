#include <iostream>
#include <vector>
using namespace std;


void phoneKeypadPrblm(string num, string output, int index, vector<string>& ans, string mapping[]){
    
    //Base case 
    if(index>=num.length()){
        ans.push_back(output);
        return;
    }

    int number = num[index]-'0';
    string value = mapping[number];
    for(int i =0; i<value.length();i++){
        output.push_back(value[i]);
        phoneKeypadPrblm(num,output,index+1,ans,mapping);
        output.pop_back();
    }


}

int main(){

    string mapping[10]= {"","","abc", "def", "ghi","jkl","mno", "pqrs","tuv","wxyz"};
    string num = "23";
    string output;
    int index =0;
    vector<string> ans;
    
    phoneKeypadPrblm(num,output,index,ans,mapping);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}