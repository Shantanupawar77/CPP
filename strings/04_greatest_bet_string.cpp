#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="84756923754875";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}