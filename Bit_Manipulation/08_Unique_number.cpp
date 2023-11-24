#include<iostream>
using namespace std;
int xorsum(int arr[],int n){
    int xsum=0;
    for(int i=0;i<n;i++){
          xsum=xsum^arr[i];
    }
    return xsum;
}
int main(){
    int arr[]={1,2,3,4,3,2,1};
    cout<<xorsum(arr,7);
    return 0;
}