#include<iostream>
using namespace std;
class Complex;
class Calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(Complex ,Complex );
        int sumComComplex(Complex ,Complex );

};
class Complex{
    int a,b;
    // //Individually declaring functions as a friend
    // friend int Calculator ::sumRealComplex(Complex o1,Complex o2);
    // friend int Calculator ::sumComComplex(Complex o1,Complex o2);
    //Aliter: Declaring Entire calculator class as friend
    friend class Calculator;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        void printData(){
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int Calculator :: sumRealComplex(Complex o1,Complex o2){
            return (o1.a+o2.a);
        }
int Calculator :: sumComComplex(Complex o1,Complex o2){
            return (o1.b+o2.b);
        }


int main(){
    Complex o1,o2;
    o1.setData(1,4);
    o2.setData(3,6);
    Calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of complex number is "<<res<<endl;
    int resc=calc.sumComComplex(o1,o2);
    cout<<"The sum of complex part of complex number is "<<resc<<endl;
    
    return 0;
}