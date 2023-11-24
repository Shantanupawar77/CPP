#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"Enter the value for n:"<<endl;
    cin>>n;
    
    int arr[100];
    cout<<"Enter the elements :"<<endl;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for( i=0,j=n-1;i<n/2;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
    cout<<"reversed array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
} 
