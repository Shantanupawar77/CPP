#include<iostream>
#include<math.h>
using namespace std;
int binaryToDecimal(int num){
    int temp,rem,des=0,i=0;
    temp=num;
    while(temp>0){
        rem=temp%10;
        des=des+rem*pow(2,i);
        temp=temp/10;
        i++;


    }
    return des;
}
int main(){
   int n;
   cout<<"Enter any binary number:";
   cin>>n; 
   int decimal=binaryToDecimal(n);
   cout<<"Decimal number is "<<decimal<<".";
   return 0;
}