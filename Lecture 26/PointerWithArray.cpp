#include <iostream>
using namespace std;

int main(){

    int arr[10]={23,122,41,67};

    /*            cout<<"Address of first memory block is : "<< arr <<endl;
                cout<<arr[0]<<endl;
                cout<<"Address of first memory block is : "<< &arr[0] <<endl;

                cout<<"4th "<< *arr<<endl;
                cout<<"5th "<< *arr+1<<endl;
                cout<<"6th "<< *(arr+1)<<endl;
                cout<<"7th "<< arr[2]<<endl;
                cout<<"8th "<< *(arr+2)<<endl;


                int i =3;
                cout<<arr[i]<<" == "<<*(arr+i)<<endl;
                cout<<i[arr]<<" == "<<*(i+arr)<<endl;
                cout<<i[arr]<<endl;

    */

        /*    int temp[10]= {1,2};
            cout<<sizeof(temp)<<endl;
            cout<<"1st "<<sizeof(*temp)<<endl;
            cout<<"2nd "<<sizeof(&temp)<<endl<<endl;

            int *ptr = &temp[0];
            cout<<"1st "<<sizeof(ptr)<<endl;
            cout<<"1st "<<sizeof(*ptr)<<endl;
            cout<<"1st "<<sizeof(&ptr)<<endl;

        */

    

    int arr1[10]={22,32,35};
// Error
    // arr = arr+1;
    int *pt = &arr1[0];
    pt = pt + 1;
    cout<<pt<<endl;
    cout<<*pt<<endl;
}   