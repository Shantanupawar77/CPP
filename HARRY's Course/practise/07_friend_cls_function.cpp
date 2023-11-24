#include<iostream>
using namespace std;
class Complex;
class Calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        int sumRealPart(Complex ,Complex);
        int sumComPart(Complex ,Complex);

};
class Complex{
    int a,b;
    public:
        friend int Calculator :: sumRealPart(Complex ,Complex );
        friend int Calculator :: sumComPart(Complex ,Complex );
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        void getData(){
            cout<<"Sum of real part of the complex numbers is"<<a<<endl;
        }
};
int Calculator :: sumRealPart(Complex o1,Complex o2){
        return (o1.a+o2.a);
    }
int Calculator :: sumComPart(Complex o1,Complex o2){
        return (o1.b+o2.b);
    }

int main(){
    Complex o1,o2;
    o1.setData(1,4);
    o2.setData(3,5);
    Calculator calc;
    int res=calc.sumRealPart(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resc=calc.sumComPart(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is "<<resc<<endl;
    
    return 0;
}