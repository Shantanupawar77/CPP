#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cout<<"Enter the number of rows and columns :";
    cin>>n>>m;
    int matrix[n][m];
    cout<<"Enter the elements for matrix :";
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Enter the element which you want to search :";
    cin>>x;
    bool flag=false;
    int i,j;
    for(i=0;i<n;i++){
        for( j=0;j<m;j++){
            if(x==matrix[i][j]){
                
                flag=true;
            }

        }
    }
    if(flag){
        cout<<"Elemet is found at index "<<i<<j;
    }
    else{
        cout<<"Element is not found";
    }
    return 0;
}