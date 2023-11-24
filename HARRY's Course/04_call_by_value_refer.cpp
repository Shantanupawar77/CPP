#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
}
void swapPointer(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

void swapReference(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    cout<<"Using swap function"<<endl;
    cout<<"Before calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    swap(x,y);
    cout<<"After calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;
    //This method will not give swap x and y

    cout<<"Using swapPointers function"<<endl;
    cout<<"Before calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"After calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;
    //This method will  give swap x and y

    cout<<"Using swapReference function"<<endl;
    cout<<"Before calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    swapReference(x,y);
    cout<<"After calling the function the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;
     //This method will  give swap x and y




    return 0;
}