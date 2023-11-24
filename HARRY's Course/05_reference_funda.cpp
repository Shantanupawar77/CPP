#include<iostream>
using namespace std;
int & swapReference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int x=10,y=20;
    cout<<"Using swapReference function"<<endl;
    cout<<"Before calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    swapReference(x,y)=766;
    cout<<"After calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;
    //This method will  give swap x and y



    return 0;
}