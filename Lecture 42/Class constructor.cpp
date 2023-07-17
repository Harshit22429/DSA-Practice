#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    Hero(int x){
        cout<<"this -> "<<this<<endl;
        this-> health = x;
    }

    Hero(Hero& temp){
        this->health = temp.health; 
    }
};

int main(){
    Hero H(10);
    cout<<"Object addres is ->"<<&H<<endl;
    cout<<"Health is "<<H.health<<endl;
    Hero copie(H);

    cout<<"Health after copied obj : "<<copie.health<<endl;
}