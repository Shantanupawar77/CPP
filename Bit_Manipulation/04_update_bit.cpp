#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n= n & mask;
    return n | (value<<pos);
}

int main(){
    int n,pos;
    cout<<updateBit(5,1,1);
    return 0;
} 