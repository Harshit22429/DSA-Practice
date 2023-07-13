#include <iostream>
using namespace std;

int main()
{
    /*
        In character case cout work as continue 
        print whenever '\n' null character is not 
        found.
        */
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[7] = "abcdek";

    cout << arr << endl;
    // attention here;
    cout << ch << endl;

    char *c = &ch[0];
    // prints entire string
    cout << "address of ch[0] : " << &ch[0] << endl;
    cout << "printing c " << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << "address of temp : " << &temp << endl;
    cout << "Printing p " << p << endl;

    return 0;
}