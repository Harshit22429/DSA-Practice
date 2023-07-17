#include <iostream>
using namespace std;

 
//Function overriding
class Animal
{   
    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};
class Dog:public Animal  // for overrinding need to inherite
{   
    public:
        //Parent function is overrinding
        void speak(){
            cout<<"Barking "<<endl;
        }
};

int main()
{   
   
   Dog obj;
   cout<<"Dog inherite Animal but speak function is ";
   obj.speak();


    return 0;
}