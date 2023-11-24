#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter lower bound and upper bound"<<endl;
    cin>>num1>>num2;
    for(int num=num1;num<=num2;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;

            }
            
        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
}