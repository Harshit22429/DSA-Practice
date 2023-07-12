#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int rowSum =0;
        for(int j =0; j<col; j++){
            rowSum+=arr[i][j];
        }
        cout<<rowSum<<endl;
    }
}

int main(){

    // create 2d array
    int arr[3][4];
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,10,100,1000},{2,22,220,2000},{3,30,300,3000}};

    cout<<"Enter array element row wise : ";
    // taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }


    // // taking input coloum wise
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    cout<<"Printing Array row wise : "<<endl;
    // printing 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // // search element in 2d-array;


    // // Print row wise sum;
    printRowSum(arr, 3,4);
}