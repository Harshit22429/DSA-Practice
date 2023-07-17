#include<iostream>

//using both following library can include strcpy function
#include<string.h>  
// #include<cstring>
using namespace std;

class Hero{
    // property or DataMember
    private:
    public:
    int health = 5;
    char* name;
    char level;

    Hero(){
        cout<<"default constructor called.";
        name = new char[100];
    }

    // Deep copy of object
    Hero(Hero& temp){
        char *name = new char[strlen(temp.name)+1];
        strcpy(name , temp.name);
        this->name = name;
        cout<<"Deep copy constructor called"<<endl;
        this->health=temp.health;  // here this point to new object add and temp is old object
        this->level = temp.level; 
    }
    void print(){
        cout<<endl;
        cout<<" name : "<<name<<endl;
        cout<<" level : "<<level<<endl;
        cout<<" health : "<<health<<endl;
        cout<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

};
int main(){
    Hero h1;
    h1.setHealth(12,123);
    h1.setLevel('A');
    char name[8]="Harshit";
    h1.setName(name);
    // h1.print();

    //use default copy constructor which copies properties shallow not deep means when update one second also update
    Hero h2(h1); //other way to copy Hero h2 = h1;
    // h2.print();


    h1.setHealth(80,123);  // h2 health remain same
    h1.name[0]='A'; // h2 also change
    h1.print();
    // cout<<"add of h1.name : "<<&h1.name<<endl;
    // cout<<"add of h2.name : "<<&h2.name<<endl;
    // cout<<"add of h1.health : "<<&h1.health<<endl;
    // cout<<"add of h2.health : "<<&h2.health<<endl;
    // cout<<"add of h1.level : "<<&h1.level<<endl;
    // cout<<"add of h2.level : "<<&h2.level<<endl;
    h2.print();

    //Copy assignment
    h2=h1;
    h1.print();
    h2.print();
}