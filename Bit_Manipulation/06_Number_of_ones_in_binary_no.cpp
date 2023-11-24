#include<iostream>
using namespace std;
int numberOfOnes(int num){
    int count=0;
    while(num){
        num=num &(num-1);
        count++;

    }
    return count;
}
int main(){
    cout<<numberOfOnes(8);
    return 0;

}