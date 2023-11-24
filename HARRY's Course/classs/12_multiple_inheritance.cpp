#include<iostream>
using namespace std;
class Base1{
    protected:
        int base1_int;
    public:
        void setbase1(int a){
            base1_int=a;
        }

};
class Base2{
    protected:
        int base2_int;
    public:
        void setbase2(int a){
            base2_int=a;
        }

};
class Derived : public Base1 ,public Base2 
{
   protected:
        int sum;
    public:
        void show(){
            cout<<"The value of base1int is "<<base1_int<<endl;
            cout<<"The value of base2int is "<<base2_int<<endl;
            cout<<"The sum of base1int and base2int is "<<(base1_int+base2_int)<<endl;
        }

};
int main(){
    Derived d;
    d.setbase1(89);
    d.setbase2(78);
    d.show();
    
    return 0;
}