#include <iostream>
using namespace std;

int main()
{
    int n1, n2, max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    cout<<"max is : "<<max;

}