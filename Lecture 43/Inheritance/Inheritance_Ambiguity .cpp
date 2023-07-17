#include <iostream>
using namespace std;

class Animal{
    public:
    int age; 
    

    public:
    void weight(){
        cout<<" Weight of Animal "<<endl;
    }
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void weight(){
        cout<<" Weight of Human "<<endl;
    }
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

// Multiple Inheritance.
class Multiple: public Animal, public Human{

};

int main(){

    Multiple obj1;
    //Inheritance Ambiguity
    // obj1.weight();       // Error
    obj1.Animal::weight();
    obj1.Human::weight();
   



    return 0;
}