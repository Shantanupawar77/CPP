#include<iostream>
using namespace std;
union money{
    int rice;
    float pounds;
    char car;
};
int main(){
    union money m1;
    m1.rice=23;
    // cout<<m1.rice<<endl;
    m1.pounds=1.089;
    // cout<<m1.pounds<<endl;
    // m1.car=1.089;
    cout<<m1.pounds<<endl;
    return 0;
    //Ek time pe ek hi ka use kar sakte ho.
}