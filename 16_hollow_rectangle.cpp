#include<iostream>
using namespace std;
int main(){
   int col,rows;
   cout<<"Number of rows :";
   cin>>rows;
   cout<<"Number of columns :";
   cin>>col;
   for(int i=1;i<=rows;i++){
    for(int j=1;j<=col;j++){
        if(i==1 ||i==rows || j==1 ||j==col){
            cout<<'*';
        }
        else{
            cout<<' ';
        }
    }
    cout<<endl;
   }
}