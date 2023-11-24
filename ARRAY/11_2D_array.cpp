#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns respectively :";
    cin>>n>>m;
    int matrix[n][m];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}