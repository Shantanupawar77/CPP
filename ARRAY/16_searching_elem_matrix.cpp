#include<iostream>
using namespace std;
int main(){
    int n,m;
    
    cout<<"Enter the number of rows and columns :"<<endl;
    cin>>n>>m;
    int mat[n][m];
    cout<<"Enter the elemets for the matrix :"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Enter the which you want to search :";
    int target;
    cin>>target;
    
    int r=0,c=m-1;
    bool found=false;
    while(r<n && c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found.";
    }
    else{
        cout<<"Element does not found.";
    }

    return 0;
}