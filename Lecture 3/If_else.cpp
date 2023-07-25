#include<iostream>
using namespace std;

//Completed

int main(){
    // int a ;
    // cout<<"Enter A number"<< endl;
    // cin>>a;
    // int b ;
    // cout<<"Enter B number"<<endl;
    // cin>>b;
    // if(a<=b){
    //     cout << "B is Answere"<< endl;
    // }else{
    //     cout<< "A is Answere" <<endl;
    // }



    // int c;
    // cout<<"Enter C number"<<endl;
    // cin>>c;
    // if(c>0){
    //     cout<<" C is positive"<<endl;
    // }else if( c== 0){
    //     cout<<" C is zero"<<endl;
    // }else{
    //     cout<<"C is negative"<<endl;
    // }



    // int d=24;
    // if(d>20){
    //     cout<<"Love"<<endl;
    // }
    // else if(d==24){
    //     cout<<"Lovely"<<endl;
    // }
    // else{
    //     cout<<"Babbar"<<endl;
    // }



    // char ch;
    // cout<<"Enter a character"<<endl;
    // cin>>ch;
    // if('A'>=ch || ch<='Z' ){
    //     cout<< " Number is Upper Case"<<endl;
    // }
    // else if('a'>=ch || ch<='z'){
    //     cout<<"Number is lowerCase"<<endl;
    // }
    // else if(ch>=0 || ch<=9){
    //     cout<<" Number is numeric";
    // }

    // int e;
    // cout<<"Printing 1 to N , so provide N value";
    // cin>>e;
    // int i=1;
    // while (i<=e)
    // {
    //     cout<<i<<endl;
    //     i+=1;
    // }
    
    // int sum, f, i;
    // i=1;
    // sum=0;
    // cout<<"Enter f value "<<endl;
    // cin>>f;
    // // while(i<=f){
    // //     sum+=i;
    // //     i=i+1;
    // // }
    // //      OR
    // // sum = f*(i+f)/2;
    // cout<<"Total sum : "<<sum;



    // // sum of even number between 1 to N
    // int sum, i, g;
    // cout<<" Enter g number for limit."<<endl;
    // cin>>g;
    // sum =0;
    // i=1;
    // while(i<=g){
    //     if(i%2==0){
    //         sum+=i;
    //     }
    //     i+=1;
    // }
    // cout<<"Total sum of even number is : "<<sum<<endl;

    // // fahrenheit to Celcius converting
    // float F, C;
    // cout<<"enter fahrenheit value : "<<endl;
    // cin>>F;
    // C= 5.0/9.0*(F-32);                        //(F*1.8)+32 celcius to pani verse
    // cout<<C;


    // // given number is prime or not
    // int givenNum;
    // int i=2;
    // cout<<"enter a number for random value"<<endl;
    // cin>>givenNum;
    // while(i<givenNum){
    //     if(givenNum%i!=0){
    //         cout<<givenNum<<" is  Prime for"<< i<<endl;
            
    //     }else{
    //         cout<<givenNum<<" is Not a Prime for "<< i<<endl;
    //     }
    //     i+=1;
    // }


    // // n*n pattern star printing
    // int row , initial;
    // cin>>row;
    // initial=1;
    // while(initial<=row){
    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout<<"*";
    //         col+=1;
    //     }      
    //     cout<<endl;  
    //     initial+=1;
    // }
    

    /*  1 1 1
        2 2 2
        3 3 3     */
    int row, initial;
    cin>>row;
    initial = 1;
    while(initial<=row){
        int col=1;
        while (col<=row)
        {
            cout<<initial;
            col+=1;
        }
        cout<<endl;       
        initial+=1;
    }
}