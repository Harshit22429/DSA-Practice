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
    //     4 3 2 1   formula i-j+1*/
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
  

    /*
        1234554321
        1234**4321
        123****321
        12******21
        1********1
    */
   int n, row;
   cin>> n;
   row=1;
   while(row<=n){
    //first triangle
    int col1=1;
    while (col1<=n-row+1){
        cout<<col1<<' ';
        col1+=1;
    }
    
    // second triangle
    int col2=row-1;
    while(col2){
        cout<<"* * ";
        col2-=1;
    }
    //third triangle
    int col3 = n-row+1;
    while(col3){
        cout<<col3<<' ';
        col3-=1;
    }


    

    cout<<endl;
    row+=1;
   }
    
}