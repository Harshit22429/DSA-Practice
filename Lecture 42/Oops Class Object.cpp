#include <iostream>
#include "outer.cpp";
using namespace std;

class Hero
{
    // property or DataMember
    private:
    int health = 5;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    int setHealth(int h, int pwd/*this is applied as condition*/){
        if(pwd==123){
            health=h;
        }
    }

    int setLevel(char ch /* , also can be apply condition*/){
        cout<<ch<<endl;
        level=ch;
    }

};
int main()
{

    // Object or instance of class
    Hero h;   //static allocation
    Hero *H = new Hero; //Dynamic allocation
    cout<<"Accessed using dynamic object health is : "<<H->getHealth()<<endl<<endl;
    cout<<"Accessed using dynamic object level is : "<<H->level<<endl<<endl;
    // cout<<h.health;
    cout << "size of class is  is : " << sizeof(h) << endl;
    // cout<<"size of class's property is : "<<sizeof(h.health);

    // class present at deffirent file in outer.cpp
    Info data;   // static allocation
    Info *Data = new Info;  // dynamic allocation
    cout << data.name<<endl;
    cout<<"Accessed using dynamic object name is : "<<(*Data).name<<endl<<endl;

    // Private property access by getter function
    cout<<"health private but accessed by getter fucntion : "<<h.getHealth()<<endl;
    cout<<"level private but accessed by getter fucntion : "<<h.getLevel()<<endl;
    //Private property updated by setter
    int password =123;
    h.setHealth(70, password);
    cout<<"After setter health is "<<h.getHealth()<<endl;
    h.setLevel('A');
    cout<<"After setter level is "<<(char)h.getLevel()<<endl;

}