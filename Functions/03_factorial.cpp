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
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int answer=fact(n);
    cout<<"The factorial of given number is "<<answer;

    return 0;
}