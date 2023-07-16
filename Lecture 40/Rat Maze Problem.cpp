#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>>& visited,vector<vector<int>>& m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }else{
        return false;
    }
}

void ratMazePrblm(vector<vector<int>>& maze,int n,vector<string>& ans,int x,int y,vector<vector<int>> visited,string path){

    //Base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;

    // 4 Choices to move - D, L, R, U

    //down
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,visited,maze)){
        path.push_back('D');
        ratMazePrblm(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    
    //left
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,n,visited,maze)){
        path.push_back('L');
        ratMazePrblm(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //right
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,visited,maze)){
        path.push_back('R');
        ratMazePrblm(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //Up
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,visited,maze)){
        path.push_back('U');
        ratMazePrblm(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }



    
    visited[x][y]=1;
}

int main(){

    vector<vector<int>> maze={  {1,1,0,0},
                                {1,1,0,1},
                                {1,1,0,0},
                                {0,1,1,1},};

    if(maze[0][0]==0){
        return false;
    }
    int srcx=0;
    int srcy=0;
    vector<string> ans;
    vector<vector<int>> visited=maze;
    for(int i=0;i<visited.size();i++){
        for(int j=0; j<visited[i].size(); j++){
            visited[i][j]=0;
        }
    }
    string path="";
    ratMazePrblm(maze,maze.size(),ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}