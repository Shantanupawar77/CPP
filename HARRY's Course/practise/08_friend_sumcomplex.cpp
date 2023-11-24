#include<iostream>
using namespace std;
class Complex{
    int a,b;
    
    public:
    friend Complex sumComplex(Complex o1,Complex o2);
        void setData(int v1,int v2){
               a=v1;
               b=v2;
        }
        void getdata(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setData(2,7);
    c1.getdata();
    c2.setData(5,7);
    c2.getdata();
    sum=sumComplex(c1,c2);
    sum.getdata();
    
    return 0;
}