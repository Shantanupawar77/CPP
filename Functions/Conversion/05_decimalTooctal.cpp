#include<iostream>
using namespace std;
int decimalToOctal(int num){
    int rem,octal=0,temp,i=1;
    temp=num;
    while(temp>0){
        octal=octal+(temp%8)*i;
        i=i*10;
        temp=temp/8;
    }
    return octal;
}
int main(){
    int n;
    cout<<"Enter any decimal number:";
    cin>>n;
    int octal=decimalToOctal(n);
    cout<<"Binary number is "<<octal;
 return 0;
}