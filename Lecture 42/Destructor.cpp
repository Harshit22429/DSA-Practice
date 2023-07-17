#include <iostream>
using namespace std;

class Hero{
    public:
    string name ="Harshit";
    //Static keyword for defining
    static int number;
    //Static functions
    static int random(){
        //inside this only can access static dataMember
        // cout<<name<<endl;
        cout<<number<<endl;
    }
    //Constructor
    Hero(){
        cout<<"Manual   Constructor"<<endl;
    }
    //manual deconstructor 
    ~Hero(){
        cout<<"Manual deconstructor called"<<endl;
    }
};

//Static keyword dataMember initializing
int Hero::number =100;

int main(){

    //Static obj
    Hero obj1;

    //dynamic obj
    Hero *b = new Hero();
    delete b;

    //Static Keyword access also can be accessible by object.propery but not recomended
    cout<<Hero::number<<endl;

    //Static fucntion call 
    Hero::random();
}