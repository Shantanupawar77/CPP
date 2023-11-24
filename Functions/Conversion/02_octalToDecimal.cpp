#include<iostream>
#include<math.h>
using namespace std;
int octalToDecimal(int num){
    int temp,rem,des=0,i=0;
    temp=num;
    while(temp>0){
        rem=temp%10;
        des=des+rem*pow(8,i);
        temp=temp/10;
        i++;


    }
    return des;
}
int main(){
   int n;
   cout<<"Enter any octal number:";
   cin>>n; 
   int decimal=octalToDecimal(n);
   cout<<"Decimal number is "<<decimal<<".";
   return 0;
}