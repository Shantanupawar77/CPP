#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    if(num1>num2){
        cout<<"num1="<<num1<<" is greater than "<<"num2="<<num2<<endl;
    }
    else{
        cout<<"num2="<<num2<<" is greater than "<<"num1="<<num1<<endl;
    }
}