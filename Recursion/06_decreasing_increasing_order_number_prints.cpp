#include<iostream>
using namespace std;
void dec(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    dec(n-1);
    
}
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<"In decreasing order :"<<endl;
    dec(n);
    cout<<"In inreasing order :"<<endl;
    inc(n);
    return 0;
}