#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int size){
    int s =0; 
    int e=size-1;
    while(s<=e){
        swap(name[s++], name[e--]);
    }
}

bool isPalindrome(char name[], int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return false;
        }
        s++;e--;
    }
    return true;
}
char getMaxOccChar(string s){
    int arr[26]= {0};
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int index =0;
        if(ch>='a' && ch<='z'){
            index = ch-'a';
        }
        else{
            index = ch -'A';
        }
        arr[index]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i =0; i<26; i++){
        if(maxi<arr[i]){
            ans= i;
            maxi=arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}
string removeSubOcc(string s, string subStr){

    while(s.find(subStr)<s.length()){
        s.erase(s.find(subStr), subStr.length());
    }
    return s;
}

bool checkEqual(int a[], int b[]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
bool isPermuation(string s, string sub){
    int arr1[26]={0};
    for (int i=0; i<sub.length(); i++){
        char ch = sub[i];
        int index = ch - 'a';
        arr1[index]++;
    }


    int i=0;
    int arr2[26] ={0};


    // //traverse s string in windowSize of sub length and compare
    int windowSize = sub.length();
    while(i<windowSize && i<s.length()){
        int index = s[i] - 'a';
        arr2[index]++;
        i++;
    }


    if(checkEqual(arr1, arr2)){
        return true;
    }
    // // traverse for further windows 
    while(i<s.length()){
        // // add new character in window
        char newChar = s[i];
        int newIndex = newChar - 'a';
        arr2[newIndex]++;


        // // remove old char from window
        char oldChar = s[i-windowSize];
        int oldIndex = oldChar - 'a';
        arr2[oldIndex]--;
        i++;

        if(checkEqual(arr1, arr2)){
            return true;
        }
    }
    return false;

}

string removeAdjDupl(string s){
    string str ="";
    int i=0;
    while(i<s.length()){
        if(str.empty()){
            str.push_back(s[i]);
        }else{
            if(str[str.length()-1]==s[i]){
                str.pop_back();
            }else{
                str.push_back(s[i]);
            }
        }
        i++;
    }
    return str;
}


int  strCompression(char name[]){
    int ansIndex = 0;
    int i=0;
    int n = strlen(name);
    while(i<n){

        int j = i+1;
        while(j<n && name[i]==name[j]){
            j++;
        }

        name[ansIndex++]= name[i];
        int  count = j-i;
        if(count>1){
            std::string cht = std::to_string(count);
            for(char ch: cht){
                name[ansIndex++]=ch;
            }
        }
        i=j;
    }
    return ansIndex;
}
int main(){
    // // Character Array;

    // char name[20];
    // cin>>name;
    // // cout<<"Your name is : "<<name<<endl;
    // // cout<<"Length of char array is : "<<getLength(name);
    // reverse(name, getLength(name));
    // cout<<"character reverse array is "<<name<<endl;
    // cout<<name<<" is Palindrome : "<<isPalindrome(name,getLength(name));


    // // // String;
    // string str ="Harshit";
    // cout<<str.length()<<endl;
    // str.push_back('a');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;

    // check given string is valid palindrome or not;



    // // Reverse words in a string;
            /* ["t","h","e"," ","A","m","i","t"," ","b","h","a","d","a","n","a"]
            o/p: ["a","n","a","d","a","h","b"," ","t","i","m","A"," ","e","h","t"] */
        
    

    // // // Return most occuring character in a string;
    // string s;
    // cin>>s;
    // cout<<"Max occuring character : "<<getMaxOccChar(s);

    // // replace space to '@40'  
        /*  i/p: "I Harshit Singh"
            o/p: "I@40Harshit@40Singh" */
    // // have to solve in-place not take extra space in memory
    



    // // // remove all occurrences of substring;
    // string s1 ;
    // cin>>s1;
    // string subStr;
    // cin>>subStr;
    // string ans = removeSubOcc(s1, subStr);
    // cout<<"String after remove sub string : "<<ans;


    // // // Permutation in String then return true otherwise return false;

    // string subStr;
    // cout<<"Enter substr : "<<endl;
    // cin>>subStr;
    // string str1;
    // cout<<"Enter string : "<<endl;
    // cin>>str1;
    // cout<<"Permutation present or not : "<<isPermuation(str1,subStr);


    // // // Remove all adjacent Duplicate in string;
    //     /* e.g.  s= "abbaca"
    //         first round :- aaca
    //         second round :- ca
    //         final o/p: ca */

    // string S;
    // cin>>S;

    // string ans1 = removeAdjDupl(S);

    // cout<<"After removing adjacent duplicate : "<<ans1<<endl;






    // // String Compression;
    char name[20];
    cin>>name;
    int ansIndex = strCompression(name);
    
    for(int i=0; i< ansIndex; i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;



}