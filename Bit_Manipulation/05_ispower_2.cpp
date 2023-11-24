#include<iostream>
using namespace std;
int isPower2(int n){
    return (n && !(n & (n-1)));
}
int main(){
    int num=isPower2(4);
    if(num){
        cout<<"Given number is a power of 2.";
    }
    else{
        cout<<"Given number is not a power of 2.";
    }
    return 0;
}