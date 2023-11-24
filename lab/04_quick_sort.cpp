#include<iostream>
using namespace std;
void quick(int a[],int lb,int ub){
    if(lb<ub){
        int pivot=lb,down=lb,up=ub;
        while(down<up){
            while((a[down]<=a[pivot]) && down<ub){
                down++;
            }
            while((a[up]>a[pivot]) && up>lb){
                up--;
            }
            if(down<up){
                swap(a[up],a[down]);
            }
        }
        swap(a[up],a[pivot]);
        quick(a,lb,ub-1);
        quick(a,ub+1,ub);

    }
}
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return a,b;
}
int main(){
    int n,lb=0,ub=n-1,a[100];
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quick(a,lb,ub);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



    return 0;
}