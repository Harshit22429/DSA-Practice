#include <iostream>
using namespace std;


/* NOTE :-
        Super class       Sub class        Final Behavior of 
        access modifier   access modifier  access modifier

                public    public      ---> public   
                public    protected   ---> protected   
                public    private     ---> private 

             protected    public      ---> protected   
             protected    protected   ---> protected   
             protected    private     ---> private  
                 
               private    public      ---> Not Accessible   
               private    protected   ---> Not Accessible   
               private    private     ---> Not Accessible   

*/

class Human{
    public:
        int height;
        int weight;
        int age;

        public:
        int getAge(){
            return this->age;
        }
        int setWeight(int w){
            this->weight = w;
        }
};

class Male:public Human{ // Male(child) class copy data form Human(parent) class only value not as reference value.
    public:
    string color;

    void rnadom(){
        cout<<"Random function called."<<endl;
    }
};

int main(){

    Male obj1;
    cout<<"age insied Male : "<<obj1.age<<endl;
    cout<<"age insied Male : "<<obj1.weight<<endl;
    cout<<"age insied Male : "<<obj1.height<<endl;
    cout<<"Color : "<<obj1.color<<endl; 
    obj1.setWeight(70);  // update only child class dataMember not parent class
    cout<<obj1.weight<<endl;
    obj1.rnadom();

    Human obj;
    cout<<"direct weight of parent class : "<<obj.weight<<endl;
}   