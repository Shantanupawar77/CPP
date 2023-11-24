#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
            }
        void setDataBysum(Complex o1,Complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printData(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
int main(){
    Complex c1,c2,c3;
    c1.setData(1,5);
    c1.printData();

    c2.setData(6,2);
    c2.printData();

    c3.setDataBysum(c1,c2);
    c3.printData();

    
    return 0;
}