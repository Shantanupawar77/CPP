#include<iostream>
using namespace std;
int linearSearch(int num,int a[],int KEY){
    for(int i=0;i<num;i++){
        if(KEY==a[i]){
            return i;
        }

    }
    return -1;
}
int main(){
    cout<<"Enter the size of array: ";
    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;
    cout<<linearSearch(n,a,key);
    return 0;
}