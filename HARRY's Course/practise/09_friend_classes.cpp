#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    friend void add(X,Y);
    public:

        void setData(int v1){
            data=v1;
            
        }


};
class Y{
    int num;
    friend void add(X,Y);
    public:
        void setData(int v1){
            num=v1;
            
        }



};
void add( X o1,Y o2){
    cout<<"Summing data of X and Y objects gives me "<<o1.data+o2.num<<endl;
}
int main(){
    X a1;
    a1.setData(3);
    Y b1;
    b1.setData(8);
    add(a1,b1);

    return 0;
}