#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // string st1="Shantanu is a coder";
    // ofstream out("sample_01.txt");
    // out<<st1;
    string st2;
    ifstream in("sample_01.txt");
    getline(in,st2);
    cout<<st2;
    
    return 0;
}