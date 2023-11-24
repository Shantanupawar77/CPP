#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int reverse=0 ;
    while(n>0){
        int last_digit=n%10;
        
        reverse=10*reverse+last_digit;
        n=n/10;
    }
    cout<<"The reverse of given number is :"<<reverse;
}