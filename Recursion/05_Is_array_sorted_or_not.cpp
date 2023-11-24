#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
    return ((arr[0]<arr[1]) && restarray);
}
int main(){
    int arr[]={17,24,33,44,57};
    int z=sorted(arr,5);
    if(z==1){
        cout<<"Given array is sorted.";

    }
    else{
        cout<<"Given array is not sorted.";

    }
    
    return 0;
} 