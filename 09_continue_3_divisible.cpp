#include<iostream>
using namespace std;
int main(){
    int n=100,i;
    for(i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }

}