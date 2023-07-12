#include <iostream>
using namespace std;

int main(){
    /*        // int num =5;
            // cout<<num<<endl;

            // cout<<"Address of num is : "<<&num<<endl;

            // int *ptr = &num;
            // cout<<"Value in ptr is : "<<ptr<<endl;
            // cout<<"Value in *ptr is : "<<*ptr<<endl;

            // double d=2546.6454;
            // double *p2 = &d;
            // cout<<"value of p2 is : "<<p2<<endl;
            // cout<<"value of *p2 is : "<<*p2<<endl;

            // cout<<"Size of integer is : "<<sizeof(num)<<endl;
            // cout<<"Size of ptr is : "<<sizeof(ptr)<<endl;
            // cout<<"Size of p2 is : "<<sizeof(p2)<<endl;
    */


    // // // Pointer to int is created, and pointing to some garbage address which is BAD PRACTICE.
    // int *p=0;
    // cout<<*p;   // // This is return segmentation fault 

    /*        int i=5;
            int *q = &i;
            cout<<"q : "<<q<<endl;
            cout<<"*q : "<<*q<<endl;

            int *p =0;
            p=q;
            cout<<"p : "<<p<<endl;
            cout<<"*p : "<<*p<<endl;
    */

                int num =8;
                int a= num;
                cout<<"a before : "<<num<<endl;
                a++;
                cout<<"a after : "<<num<<endl;


                int *p = &num;
                cout<<"before : "<<num<<endl;
                (*p) ++;
                cout<<"after : "<<num<<endl;
    

      // // Copying a pointer
      int *q = p;
      cout<< p <<" - "<<q<<endl;
      cout<< *p <<" - "<<*q<<endl;

      // // important concept;
      int i =3;
      int *t = &i;
      (*t)++;
      cout<<*t<<endl;
      cout<<"before t "<<t<<" -->"<<*t<<endl;
      t = t+1;
      (*t)++;
      cout<<*t<<endl;
      cout<<"after t  "<<t<<" -->"<<*t<<endl;




}