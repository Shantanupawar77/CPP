#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int pre=power(n,p-1);
    return n*pre;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<n<<"^"<<p<<"="<<power(n,p);
    
    return 0;
}