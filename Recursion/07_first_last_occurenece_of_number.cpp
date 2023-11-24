#include<iostream>
using namespace std;
int firstocc(int arr[],int key,int i,int n){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,key,i+1,n);

}
int lastocc(int arr[],int key,int j,int n){
    if(j==n){
        return -1;
    }
    int restarray=lastocc(arr,key,j+1,n);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[j]==key){
        return j;
    }
    return -1;

    
}
int main(){
    int arr[]={1,2,3,4,6,2,4,2};
    cout<<firstocc(arr,2,0,8)<<endl;
    cout<<lastocc(arr,2,0,8)<<endl;
    return 0;
}