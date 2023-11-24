#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNum=INT_MIN;
    int minNum=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxNum){
            maxNum=arr[i];

        }
        if(arr[i]<minNum){
            minNum=arr[i];

        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The maximum number is "<<maxNum<<"  ";
    cout<<endl;
    cout<<"The minimum number is "<<minNum<<"  ";
    return 0;
}