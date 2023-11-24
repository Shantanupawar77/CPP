#include<iostream>
using namespace std;
void replacePI(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p'&& s[1]=='i'){
        cout<<"3.14";
        return replacePI(s.substr(2));
    }
    else{
        cout<<s[0];
        return replacePI(s.substr(1));
    }
}
int main(){
    string str;
    cin>>str;
    replacePI(str);
    return 0;
}