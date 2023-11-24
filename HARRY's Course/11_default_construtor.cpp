#include<iostream>
using namespace std;
class Number{
    int num;
    public:
        Number(){
            num=0;
        }
        Number(int a){
            num=a;
        }
        Number(Number &obj){
            num=obj.num;
        }
        void display(){
            cout<<"The number is "<<num<<endl;
        }

};
int main(){
    Number x,y(22),z(34),z1(z);
    x.display();
    y.display();
    z.display();
    z1.display();
    Number z2=y;
    z2.display();
    return 0;
}