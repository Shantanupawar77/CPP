#include<iostream>
using namespace std;
void numberOfSubsets(int arr[],int num){
     for(int i=0;i<(1<<num);i++){
        for(int j=0;j<num;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
     }
}
int main(){
    int arr[4]={1,2,3,4};

    numberOfSubsets(arr,4);
    return 0;
}