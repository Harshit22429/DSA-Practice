#include<iostream>
using namespace std;

// This function applicable only for n*m matrix and also row as well as column wise sorted
bool isTargetPresent(int arr[][3], int target, int row, int col){
    int rowIndex =0;
    int colIndex =col-1;
    while(rowIndex<row && colIndex>=0){
        int element = arr[rowIndex][colIndex];
        if(element==target){
            return 1;
        }else if(element<target){
            rowIndex++;
        }else{
            colIndex--;
        }
    }
}

// This function applicable only for n*n matrix and also row as well as column wise sorted
bool isPresent(int arr[][3], int target, int row, int col){
    int Drow=0;
    int Dcol=0;
    while(Drow<row && Dcol<col){
        if(arr[Drow][Dcol]==target){
            return 1;
        }else if (arr[Drow][Dcol]<target){
            Drow++;
            Dcol++;
        }else{
            for(int index=0; index<Drow; index++){
                if(arr[Drow][index]==target || arr[index][Dcol]==target){
                    return 1;
                }
            }
            Drow++;
            Dcol++;
        }
    }
    return 0;
}

// This function applicable for n*m matrix and also in whole sorted order
bool isElemPresent(int arr[][5], int target, int row, int col){
    
    int start =0;
    int end = row*col-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int element = arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }else if( element < target){
            start = mid+1;
        }else{
            end=mid-1;
        }
    }
    return 0;
}

void rotate90deg(int arr[][5], int row, int col){
    int newArr[5][5];
    int newScol = 0;
    int newSrow = 0;
    int newErow = row-1;
    int newEcol = col-1;

    //real mapping
    int endCol = col-1;
    int startCol =0;
    int endRow= row-1;
    int startRow = 0;

    // int startCol = row-1;
    // int endCol = 0;
    // int startRow = 0;
    // int endRow = col-1;

    int total = row*col;
    int count =0;
    while(count<total){
        // traverse starting column bottom to top  && storing in starting row
        for(int index=endRow, newIndex=newScol ; count<total && index>=startRow, newIndex<=newEcol; index--, newIndex++){
            // cout<<arr[index][startCol]<<" ";
            newArr[newSrow][newIndex]=arr[index][startCol];
            count++;
            
        }
        startCol++;
        newSrow++;

        // traverse starting row left to righ and store into ending column 
        for(int index = startCol, newIndex= newSrow ; count<total && index<=endCol, newIndex<=newErow; index++, newIndex++){
            // cout<<arr[startRow][index]<<" ";
            newArr[newIndex][newEcol] =arr[startRow][index];
            count++;
        }
        startRow++;
        newEcol--;

        // traverse ending column top to bottom and storing into ending row
        for(int index=startRow, newIndex = newEcol; count<total && index<=endRow, newIndex>= newScol; index++, newIndex--){
            // cout<<arr[index][endCol]<<" ";
            newArr[newErow][newIndex] =arr[index][endCol];
            count++;
        }
        endCol--;
        newErow--;


        // traverse ending row right to left and storing into starting column
        for(int index=endCol, newIndex = newErow; count<total && index>=startCol, newIndex>=newSrow; index--, newIndex--){
            // cout<<arr[endRow][index]<<" ";
            newArr[newIndex][newScol]=arr[endRow][index];
            count++;
        }
        endRow--;
        newScol++;

    }

    cout<<endl<<"Printing new Rotated array"<<endl;
    for(int i =0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<newArr[i][j]<<" ";
        }
        cout<<endl;
    }




}

void printSpiral(int arr[][5], int row, int col){
    int size = row*col;
    int count =0;
    int startRow = 0;
    int endCol = col-1;
    int endRow = row-1;
    int startCol = 0;
    while(count<size){

        // print starting row
        for(int j =startCol ; count<size && j<=endCol; j++){
            cout<<arr[startRow][j]<<" ";
            count++;
        }
        startRow++;

        // print ending col
        for(int i=startRow; count<size && i<=endRow; i++){
            cout<<arr[i][endCol]<<" ";
            count++;
        }
        endCol--;

        // print ending row
        for(int j=endCol; count<size && j>=startCol; j--){
            cout<<arr[endRow][j]<<" ";
            count++;
        }   
        endRow--;

        // print starting col
        for(int i=endRow; count<size && i>=startRow; i--){
            cout<<arr[i][startCol]<<" ";
            count++;
        }
        startCol++;

    }



}

void printLikeWave(int arr[][4], int row, int col){
    for(int j =0; j<col; j++){
        if(j%2==0){
        for(int i=0; i<row; i++){
            cout<<arr[i][j]<<" ";
        }
        }else{
            for(int i=row-1; i>=0; i--){
            cout<<arr[i][j]<<" ";
        }
        }
    }
    cout<<endl; 
}


int main(){
    int arr[3][3];


    cout<<"Enter array element row wise : ";
    // taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    // // Print like a wave first column top to bottom, next column bottom to top
    // printLikeWave(arr,3,4);

    // // Print like a spiral 
    // printSpiral(arr,5,5);

    cout<<"Printing Input  2D-Array"<<endl;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // // // rotate 2d array by 90 degree clock wise;
    //     /* Approach
    //         1. Traverse starting column bottom to top and store into newMatrix's starting row left to right
    //         2. Traverse starting row left to right and store into newMatrix's ending column top to bottom
    //         3. Traverse ending column top to bottom and store into newMatrix's ending row right to left
    //         4. Traverse endign row right to left and store into newMatrix's starting column bottom to top
    //         */
    // rotate90deg(arr,5,5);

    



    // // // search in 2D Matrix using binary search martrix in sorted order
    // int elem ;
    // cout<<"Enter searching element : ";
    // cin>>elem;
    // cout<<elem<<" is present in array or not :"<<isElemPresent(arr,elem, 5,5);



    // // search in 2D Matrix but elements are sorted in row and col wise not whole matrix sorted;
    int target;
    cout<<"Enter searching element : ";
    cin>>target;
    // cout<<target<<" is present in array or not :"<<isPresent(arr,target, 3,3);   // This only for n*n matrix
    cout<<target<<" is present in array or not :"<<isTargetPresent(arr,target, 3,3);   // This for n*m matrix

}