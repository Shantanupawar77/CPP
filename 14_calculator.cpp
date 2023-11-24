#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    char op;
    cout<<"Enter an operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
    case '%':
        cout<<num1<<"%"<<num2<<"="<<num1%num2;
        break;
    
    default:
        cout<<"Invalid Input";
        break;
    }
}