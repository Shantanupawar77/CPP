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
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<" is maximum Till index "<<i;
        cout<<endl;
            }

    return 0;
    }