#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
         Complex(void);
         void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i";
         }

};
Complex :: Complex(void){
    a=10;
    b=9;
}

int main(){
    Complex c;
    c.printNumber();

    
    return 0;
}