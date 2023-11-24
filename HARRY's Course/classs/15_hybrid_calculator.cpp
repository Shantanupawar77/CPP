#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
    int a,b;
    public:
        void setDataSimple(int v1,int v2){
            a=v1;
            b=v2;

        }
        void simpleOperator(){
            cout<<"The value of a+b is "<<a+b<<endl;
            cout<<"The value of a-b is "<<a-b<<endl;
            cout<<"The value of a*b is "<<a*b<<endl;
            cout<<"The value of a/b is "<<a/b<<endl;
        }

};
class ScintificCalculator{
    int a,b;
    public:
        void setDataScientific(int v1){
            a=v1;
            

        }
        void scientificOperator(){
            cout<<"The value of sin(a) is"<<sin(a)<<endl;
            cout<<"The value of cos(a) is"<<cos(a)<<endl;
            cout<<"The value of tan(a) is"<<tan(a)<<endl;
            cout<<"The value of exp(a) is"<<exp(a)<<endl;
        }

};
class HybridCalculator : public ScintificCalculator,public SimpleCalculator{

};
int main(){
    HybridCalculator calc;
    calc.setDataSimple(10,20);
    calc.simpleOperator();
    calc.setDataScientific(1);
    calc.scientificOperator();

    
    return 0;
}