#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number";
    cin>>n;
    if(n==2){
            cout<<"Given number is prime";

        }
    for(i=2;i<n;i++){
        
        if(n%i==0){
            cout<<"Given number is not prime"<<endl;
            break;
        }
        
        else{
            cout<<"Given number is prime"<<endl;
            break;
        }
    }
}