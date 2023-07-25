//  In this lecture more than 18 question will solved.
#include <iostream>
using namespace std;

int main()
{

    // /* 1 2 3 4
    //    1 2 3 4
    //    1 2 3 4
    //    1 2 3 4*/
    //     int row, initial;
    //     initial=1;
    //     cin>> row;
    //     while(initial<=row){
    //         int col=1;
    //         while(col<=row){
    //             cout<<col;
    //             col+=1;
    //         }
    //         cout<<endl;
    //         initial+=1;
    //     }

    // // /*  1
    // //     2 3
    // //     3 4 5
    // //     4 5 6 7 */
    // // int row , initial;
    // // cin>>row;
    // // initial=1;
    // // while (initial<=row)
    // // {
    // //     int col=1;
    // //     int value = initial;
    // //     while(col<=initial){
    // //         cout<<value<<" ";
    // //         value+=1;
    // //         col+=1;
    // //     }
    // //     cout<<endl;
    // //     initial+=1;
    // // }

    // // other approach  ==> in this approach basically we intialize integer and then increment by 1 after one row printing

    // int row, initial, k;
    // cin>>row;
    // k=0;
    // initial=1;
    // while (initial<=row)
    // {
    //     int col=1;
    //     while(col<=initial){
    //         cout<<k+col;
    //         col+=1;
    //     }
    //     k+=1;
    //     cout<<endl;
    //     initial+=1;
    // }

    // /*  1
    //     2 1
    //     3 2 1
    //     4 3 2 1   formula i-j+1 */
    // int row, initial;
    // cin>>row;
    // initial=1;
    // while(initial<=row){
    //     int col = 1;
    //     int value=initial;
    //     while(col<=initial){
    //         cout<<value;
    //         value-=1;
    //         col+=1;
    //     }
    //     cout<<endl;
    //     initial+=1;
    // }


    // // /*  1
    // //     2 3
    // //     4 5 6
    // //     7 8 9 10   */
    // int row;
    // cin>>row;
    // int count =1;
    // for(int i=1; i<=row; i++){
    //     int col =0;
    //     while(col<i){
    //         cout<<count<<" ";
    //         count++;
    //         col++;
    //     }cout<<endl;
    // }



    // /*   1
    //     121
    //    12321
    //   1234321
    // */
    // int row, n;
    // cin >> n;
    // row = 1;
    // // for space printing.
    // while (row <= n)
    // {
        
    //     // space
    //     int space = n-row;
    //     while(space>=1){
    //         cout<<" "  ;
    //         space-=1;
    //     }
    //     //right triangle
    //     int value = 1;
    //     while(value<=row){
    //         cout<<value;
    //         value+=1;
    //     }
    //     //left triangle
    //     int x = row-1;
    //     while(x){
    //         cout<<x;
    //         x-=1;
    //     }
    //     cout<<endl;
    //         row += 1;
    // }
  

//     /*
//         1234554321
//         1234**4321
//         123****321
//         12******21
//         1********1
//     */
//    int n, row;
//    cin>> n;
//    row=1;
//    while(row<=n){
//     //first triangle
//     int col1=1;
//     while (col1<=n-row+1){
//         cout<<col1<<' ';
//         col1+=1;
//     }
    
//     // second triangle
//     int col2=row-1;
//     while(col2){
//         cout<<"* * ";
//         col2-=1;
//     }
//     //third triangle
//     int col3 = n-row+1;
//     while(col3){
//         cout<<col3<<' ';
//         col3-=1;
//     }
//     cout<<endl;
//     row+=1;
//    }


    // /*  A B C D
    //     A B C D
    //     A B C D
    //     A B C D
    // matrix of n*n as input given */
    // int n;
    // cin>>n;
    // for ( int row =0; row<n; row++){
    //     for(int col=0; col<n; col++){
    //         char ch ='A';
    //         ch = ch+col;
    //         cout<<ch<<" ";
    //     }cout<<endl;
    // }


    // // /*  A B C D
    // //     E F G H
    // //     I J K L
    // //     M N O P
    // // matrix of n*n as input given */
    // int n;
    // cin>>n;
    // char ch ='A';
    // for( int row =0; row<n; row++){
    //     for(int col =0; col<n; col++){
    //         cout<<ch<<" ";
    //         ch = ch+1;
    //     }cout<<endl;
    // }
    
    // // /* A B C            
    // //     B C D
    // //     C D E
    // // matrix of n*n as input given */
    // int n ;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col =0; col<n; col++){
    //         char ch = 'A'+row+col;            
    //         cout<<ch<<" ";
    //     }cout<<endl;
    // }


    // /*  D
    // //  C D
    // //  B C D
    // //  A B C D
    //     mtrix of n*n input n is given */
    // int n;
    // cin>>n;
    // int row =1;
    // while (row<=n)   
    // {
    //     int col =0;
    //     while(col<row){
    //         char ch = 'A'+n-row+col;
    //         cout<<ch<<" ";
    //         col++;
    //     }cout<<endl;
    //     row++;
    // }



//     /*      *
//            **
//           ***
//          ****
//         *****
//     //  mtrix of n*n input n is given
//     */
//    int n;
//    cin>>n;
//    int row =1;
//    while(row<=n){
//     int space = n-row;
//     while(space>0){
//         cout<<" ";
//         space--;
//     }
//     int star = 0;
//     while(star<row){
//         cout<<"*";
//         star++;
//     }cout<<endl;
//     row++;
//    }


    /*  *****
        ****
        ***
        **
        *
    //  mtrix of n*n input n is given
    */
    int n;
    cin>>n;
    int row =0;
    while(row<n){
        int col = n-row;
        while(col>0){
            cout<<"*";
            col--;
        }cout<<endl;
        row++;
    }
    
return 0;
}