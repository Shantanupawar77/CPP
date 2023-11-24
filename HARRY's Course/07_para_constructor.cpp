#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(int ,int);
        void printData(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};
Complex ::Complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    Complex a(3,4);//Implicit call
    a.printData();
    Complex b=Complex(5,7);//Explicit call
    b.printData();

    
    return 0;
}