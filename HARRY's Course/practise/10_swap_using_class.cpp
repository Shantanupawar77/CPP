#include<iostream>
using namespace std;
class C2;
class C1{
    int data;
    friend void exchange(C1 &,C2 &);
    public:

        void setData(int v1){
            data=v1;
            
        }
        void display(){
            cout<<data;
        }


};
class C2{
    int num;
    friend void exchange(C1 &,C2 &);
    public:
        void setData(int v1){
            num=v1;
            
        }
        void display(){
            cout<<num;
        }



};
void exchange( C1 & x,C2 & y){
    int temp=x.data;
    x.data=y.num;
    y.num=temp;
    
}
int main(){
    C1 oc1;
    C2 oc2;
    oc1.setData(23);
    oc2.setData(90);
    exchange(oc1,oc2);
    cout<<"The value of c1 after exchanging becomes ";
    oc1.display();
    cout<<endl;
    cout<<"The value of c2 after exchanging becomes ";
    oc2.display();
   
    return 0;
}