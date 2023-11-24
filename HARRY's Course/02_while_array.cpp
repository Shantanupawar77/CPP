#include<iostream>
using namespace std;
int main(){
    int marks[6];
    marks[0]=90;
    marks[1]=34;
    marks[2]=67;
    marks[3]=96;
    marks[4]=92;
    marks[5]=93;
    // int i=0;
    // while(i<6){
    //     cout<<"The marks of the student "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    //Using pointer arithmetic
    int *p=marks;
    cout<<"The value of marks[0] is "<<(*(p))<<endl;
    cout<<"The value of marks[1] is "<<(*(p+1))<<endl;
    cout<<"The value of marks[2] is "<<(*(p+2))<<endl;
    cout<<"The value of marks[3] is "<<(*(p+3))<<endl;
    cout<<"The value of marks[4] is "<<(*(p+4))<<endl;
    cout<<"The value of marks[5] is "<<(*(p+5))<<endl;
    return 0;
}