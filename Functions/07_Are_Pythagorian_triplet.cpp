#include<iostream>
#include<math.h>
using namespace std;
void Are_p_t(int x,int y,int z){
    int x1=max(x,max(y,z));
    int x2,x3;
    if(x1==x){
        x2=y;
        x3=z;
    }
    else if(x1==y){
        x2=x;
        x3=z;
    }
    else{
        x2=x;
        x3=y;
    }
    if((x1*x1)==((x2*x2)+(x3*x3))){
        cout<<"Pythagorian Triplet.";
    }
    else{
        cout<<"Not a pythagorian Triplet.";
    }

    return;
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;
    Are_p_t(a,b,c);

}