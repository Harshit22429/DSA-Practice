#include <iostream>
using namespace std;

int main(){


    // creation of jagged array dynamically
    int row;
    cout<<"Enter row size : "<<endl;
    cin>>row;
    // creation of 2D-Jagged Array Dynamically
    int** arr = new int*[row];
    //for column size tracking
    int* colArr = new int[row];
    for(int i=0; i<row; i++){
        cout<<"Enter col size present in "<<i<<"th row: ";
        int col;
        cin>>col;
        colArr[i]=col;
    }
    //for each row's column size
    for(int i=0; i<row; i++){        
        arr[i]=new int[colArr[i]];
    }

    //Taking input into 
    for(int i=0; i<row; i++){
        int col = colArr[i];
        cout<<"Enter "<<i<<"th row's "<<col<<" elements : ";
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }cout<<endl;
    }

    //Printing output 
    for(int i=0; i<row; i++){
        int col = colArr[i];
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // releasing memory 2d array
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;

    // for releasing 1d array
    delete []colArr;
}