#include <iostream>
using namespace std;

class Animal{
    public:
    int age; 
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{

};

class GermanSephered:public Dog{

};
int main(){

    GermanSephered g;
    g.speak();
    cout<<g.age<<endl;



    return 0;
}