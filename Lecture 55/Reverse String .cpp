#include <iostream>
#include <stack>
using namespace std;

// print stack elements
void print(stack<int> stk){

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }cout<<endl;
}

// Delete middle element of stack by Recursion
void deleteMiddleOfStk(stack<int> &stk, int count, int size){

    //Base case
    if(count==size/2){
        stk.pop();
        return;
    }

    int topElement = stk.top();
    stk.pop();

    // Recursion call
    deleteMiddleOfStk(stk, count+1,size);

    stk.push(topElement);
}


// isValidParenthesis function
bool isValidParenthesis(string str){

    //create a stack
    stack<int> stk;

    // traver string for each character of string
    for(int i=0; i<str.length() ; i++){
        char ch = str[i];
        //if Opening parenthesis then push into stack
        if( ch=='[' || ch=='{' || ch=='('){
            stk.push(ch);
        }else{  
            // if closing parenthesis then compare top char of stack
            char topCh ='-1';
            if(!stk.empty())
                topCh = stk.top();
            if(ch==']' && topCh=='['){
                //if true then pop that char and move string pointer next
                stk.pop();               
            }
            else if(ch=='}' && topCh=='{'){
                //if true then pop that char and move string pointer next
                stk.pop();               
            }
            else if(ch==')' && topCh=='('){
                //if true then pop that char and move string pointer next
                stk.pop();               
            }
            
            else{
                // else return not balanced string is.
                return 0;
            }       
        }
    }
    if(stk.empty()){
        return 1;
    }
    else{
        return 0;
    }
}


// insrtElemAtBtmOfStk insert element at bottom of a given stack
void insrtElemAtBtmOfStk(stack<int> &stk, int element){

    // base case 
    if(stk.empty()){
        stk.push(element);
        return;
    }

    int topElem = stk.top();
    stk.pop();

    // recursion
    insrtElemAtBtmOfStk(stk,element);

    stk.push(topElem);
}

// Reverse stack using Recursion

        //insert At bottom
void insertAtBottom(stack<int> &stk, int element){

    //Base case 
    if(stk.empty()){
        stk.push(element);
        return;
    }

    int topElem = stk.top();
    stk.pop();

    // recursion
    insertAtBottom(stk,element);
    stk.push(topElem);
}
void reverseStkByRecursion(stack<int> &stk){

    //base case
    if(stk.empty()){
        return;
    }

    int topElem = stk.top();
    stk.pop();

    // recursion
    reverseStkByRecursion(stk);

    //insert at bottom
    insertAtBottom(stk,topElem);
}


// sort stack looping not allowed means using recursion
        // insert sorted way
void insertSorted(stack<int> &stk, int elem){

    //base case
    if(stk.empty() || (!stk.empty() && stk.top()<elem)){
        stk.push(elem);
        return;
    }

    int n = stk.top();
    stk.pop();

    insertSorted(stk,elem);
    stk.push(n);
}
void sortStack(stack<int> &stk){
    
    //base case
    if(stk.empty()){
        return;
    }

    int num = stk.top();
    stk.pop();

    //recursion
    sortStack(stk);
    insertSorted(stk,num);
}


// is redundant parenthesis is present into mathematical expression
bool isRedundantParenthesis(string str){
    stack<char> stk;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='/' ||ch=='*'){
            stk.push(ch);
        }
        if(ch==')'){
            if(stk.top()=='('){
                return 1;
            }else{
                while(stk.top()!='(' ){
                    stk.pop();
                }
                if(stk.top()=='('){
                    stk.pop();
                }
            }
        }
    }
    return 0;
}

// minimum cost to make a given string is balanced or valid
int minCostToValid(string str){
    if(str.length()&1){
        return -1;
    }
    stack<char> stk;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch =='{'){
            stk.push(ch);
        }else{
            if( !stk.empty() && stk.top()=='{'){
                stk.pop();
            }else{
                stk.push(ch);
            }
        }
    }
    // now stk contains invalid characters
    int a =0;
    int b=0;
    while(!stk.empty()){
        if(stk.top()=='}'){
            a++;
            stk.pop();
        }else{
            b++;
            stk.pop();
        }
    }

    int ans = ((a+1)/2)+((b+1)/2);
    return ans;
}
int main(){

/*
    // Reverse a string using stack
    string str ="Harshit";
    stack<char> s;

    for(int i =0; i<str.length(); i++){
        s.push(str[i]);
    }

    string ans ="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<"ans is : "<<ans<<endl;
*/

/*
    //Delete middle element of stack
    stack<int> stk;
    stk.push(4);
    stk.push(2);
    stk.push(9);
    stk.push(5);
    stk.push(3);
    int count =0;
    int size = stk.size();
    print(stk);
    deleteMiddleOfStk(stk, count, size);
    print(stk);
    // cout<<" is original stk empty : "<<stk.empty()<<endl;
*/


/*
    // check given string is having valid parenthesis means parenthesis is balanced or not
    string str = "[()]{}{[()()]()}{";
    // cout<<"string len" <<str.length()<<endl;
    if(isValidParenthesis(str)){
        cout<<"String have balanced parenthesis. "<<endl;
    }else{
        cout<<"String Not balaced parenthesis"<<endl;
    }
*/


/*
    //Insert an element at bottom in a given stack
    int element = 6;
    stack<int> stk;
    stk.push(4);
    stk.push(2);
    stk.push(9);
    stk.push(5);
    stk.push(3);
    print(stk);
    insrtElemAtBtmOfStk(stk,element);
    print(stk);
*/

/*
    //Reverse a stack using Recursion
    stack<int> stk;
    stk.push(4);
    stk.push(2);
    stk.push(9);
    stk.push(5);
    stk.push(3);
    print(stk);
    reverseStkByRecursion(stk);
    print(stk);
*/



/*
    // Sort stack when looping is not allowed means use recursion
    stack<int> stk;
    stk.push(4);
    stk.push(2);
    stk.push(9);
    stk.push(5);
    stk.push(3);
    print(stk);
    sortStack(stk);
    print (stk);
*/


/*
    // check is there in a string present any redundant parentthesis into given mathmatical expression
    string str="((a*b)+(b-(c)))";
    cout<<"redundant is present or not " <<isRedundantParenthesis(str);
*/


    // Minimum coast to make string valid
    string str = "}{{{{}";
    cout<<"Minimum cost to make string balanced is : "<<minCostToValid(str)<<endl;

    return 0;
}