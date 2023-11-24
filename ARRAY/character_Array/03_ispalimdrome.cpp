#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char name[n+1];
    cout<<"Enter name:";
    cin>>name;
    bool check=1;
    for(int i=0;i<n;i++){
        if(name[i]!=name[n-1-i]){
            check=0;
            break;

        }
    }
    if(check){
        cout<<"Given name is a  palimdrome.";
    }
    else{
        cout<<"Given name is not a palimdrome.";
    }
    return 0;
}