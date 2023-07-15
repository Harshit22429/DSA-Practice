#include <iostream>
using namespace std;

void update(int **p){
    // p=p+1;
    // cout<<endl<<endl<<"inside function p and *p and **p "<<p<<", "<<*p<<" and "<<**p<<endl<<endl;
    // something update -> No change i original value

    // *p = *p +1;
    // something update ->Yes, main value is not updated but p's address value increased by 4;
    **p =**p+1;
    // // something update ->Yes, Main value icreased by 1 no address updated p's adress's value's value is incremented;

}

int main(){


    // int i=4;
    // int* p = &i;
    // int** ptr = &p;

    // cout<<"Printing p "<<p<<endl;
    // cout<<"Address of p"<<&p<<endl;
    // cout<<"Printing *ptr "<<*ptr<<endl<<endl;

    // cout<<"printing i "<<i<<endl;
    // cout<<"printing *p "<<*p<<endl;
    // cout<<"printing **ptr "<<**ptr<<endl<<endl;

    // cout<<"printing ptr "<<ptr<<endl;
    // cout<<"Printing &p  "<<&p<<endl;

/*
    cout<<endl<<endl<<endl;
    cout<<"before i "<<i<<endl;
    cout<<"before p "<<p<<endl;
    cout<<"before ptr "<<ptr<<endl;
    update(ptr);
    cout<<"After i "<<i<<endl;
    cout<<"After p "<<p<<endl;
    cout<<"After ptr "<<ptr<<endl;
*/

//Question

   int arr[5];
   int *p;
   cout<<sizeof(arr)<<" "<<sizeof(p)<<endl;


   return 0;
}