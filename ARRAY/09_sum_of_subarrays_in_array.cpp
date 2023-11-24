#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int current=0;
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current+=a[j];
            cout<<"Sum of current subarray is "<<current<<endl;
        }
    }
    return 0;
}
