#include<iostream>
#include<string>
using namespace std;
int main(){
    string st1="abc";
    string st2="abc";
    if(!st1.compare(st2)){
          cout<<"Strings are equal.";
    }

    return 0;
}