#include<iostream>
using namespace std;
class Vector{
    int a,b;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
             }
        void sumData(Vector o1,Vector o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printData(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};
int main(){
    Vector c1,c2,c3;
    c1.setData(1,2);
    c1.printData();

    c2.setData(2,5);
    c2.printData();
    c3.sumData(c1,c2);
    c3.printData();
    
    return 0;
}