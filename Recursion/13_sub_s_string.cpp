#include<iostream>
using namespace std;
void subSTR(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subSTR(ros,ans);
    subSTR(ros,ans+ch);
    subSTR(ros,ans+(to_string(code)));
     
    
}

int main(){
    
    subSTR("AB","");
    cout<<endl;
    return 0;
}