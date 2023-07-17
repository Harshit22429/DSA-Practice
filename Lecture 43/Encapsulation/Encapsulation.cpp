#include <iostream>
using namespace std;

class student{

    private:
        string name;
        int age =21;
        int height;
    
    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    student first;
    cout<<"Age is : "<<first.getAge()<<endl;
    cout<<"clear no error"<<endl;

    return 0;
}