#include <iostream>
using namespace std;

//Operator OverLoadding
class B{
    public:
    int a;
    int b;

    // + operator overload
    void operator + (B& obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output is : "<<value2-value1<<endl;
    }
};
//Function OverLoadding
class A
{   
    public:
    // i) Function overloading with different numbers of arguments:
    //  Function with two parameters
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    // Function with three parameters
    int add(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }



/*
    // ii) Function overloading with different types of arguments:
    // Function with two integer parameters 
    int add(int num1, int num2) { 
        return num1 + num2; 
    } 
    // Function with two double parameters 
    double add(double num1, double num2) { 
        return num1 + num2; 
    }
*/


/*
    // iii)  A function with default arguments can be called with 2  or 3 or 4 arguments.
    int add(int x, int y, int z = 0, int w = 0) { 
        return (x + y + z + w); 
    }
*/


};

int main()
{   
    //Function overloadsing
    A a;
    cout<<a.add(3,4);


    //Operator overloadding
    cout<<endl;
    B obj1, obj2;
    obj1.a=5;
    obj2.a=9;
    obj1+obj2;



    return 0;
}