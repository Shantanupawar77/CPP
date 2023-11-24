#include<iostream>
using namespace std;
int decimalToBinary(int num){
    int rem,bin=0,temp,i=1;
    temp=num;
    while(temp>0){
        bin=bin+(temp%2)*i;
        i=i*10;
        temp=temp/2;
    }
    return bin;
}
int main(){
    int n;
    cout<<"Enter any decimal number:";
    cin>>n;
    int binary=decimalToBinary(n);
    cout<<"Binary number is "<<binary;
 return 0;
}