#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n:"<<endl;
    cin>>n;
    int max=INT_MIN;
    int arr[100];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest number in the array is :";
    cout<<max;
    return 0;
}