#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string reststr=s.substr(1);
    reverse(reststr);
    cout<<s[0];
}
int main(){
    reverse("Shantanu");
    return 0;
}