#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input the caharacter  :";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namste";
        break;
    case 'c':
        cout<<"Namaskar";
        break;
    case 'd':
        cout<<"cioa";
        break;
    case 'e':
        cout<<"salute";
        break;
    
    default:
        cout<<"I am still working";
        break;
    }


}