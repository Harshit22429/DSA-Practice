#include <iostream>
using namespace std;

int main(){

    int row, col;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter col : ";
    cin>>col;
    cout<<"Enter "<<row*col<<" elements for martrix "<<endl;
    

    //Creation of matrix;
    int** arr = new int *[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];  // into Heap memory means dynamic allocation
    }


    // Taking input into matrix
    for(int i=0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    
    // Printing Output of matrix
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j =0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // releas Dynamic memory which not release automatically eventhough program will completely executed.
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr;
}