#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,arr[n];
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    //cout<<"The possible subarrays are :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                //cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            maxSum=max(maxSum,sum);
            //cout<<endl;
        }
    }
    cout<<"maximum sum is "<<maxSum;

    return 0;
}