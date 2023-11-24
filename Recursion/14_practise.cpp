#include<iostream>
using namespace std;
string arraycode[]={"","","ABC","DEF","GHI","JKL","MNO","PQR","STU","VWX","YZ"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=arraycode[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }

}
int main(){
    keypad("23","");
    return 0;
}





// string keypadArr[]={"","","ABC","DEF","GHI","JKL","MNO","PQR","STU","VWX","YZ"};
// void keypad(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string code=keypadArr[ch-'0'];
//     string ros=s.substr(1);
//     for(int i=0;i<code.length();i++){
//         keypad(ros,ans+code[i]);
//     }
// }
// int main(){
//     keypad("23","");
//     return 0;
// }