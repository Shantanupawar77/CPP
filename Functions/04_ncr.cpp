#include<iostream>
using namespace std;
int fact(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    int ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<"The answer is "<<ncr;
    return 0;
}