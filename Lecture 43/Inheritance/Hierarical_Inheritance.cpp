#include <iostream>
using namespace std;

class A{
    

    public:
    void func1(){
        cout<<"Inside funtin 1"<<endl;
    }
};
//Hierarical Inheritance
class B:public A{
    public:
    void func2(){
        cout<<"Inside funtin 2"<<endl;
    }
};



class C:public A{
    public:
    void func3(){
        cout<<"Inside funtin 3"<<endl;
    }
};


int main(){

    B b;
    C c;
    b.func1();
    c.func1();




    return 0;
}