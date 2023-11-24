#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input a character :"<<endl;
    cin>>button;
    if(button=='a'){
        cout<<"Hello";
    }
    else if(button=='b'){
        cout<<"Namaste";
    }
    else if(button=='c'){
        cout<<"cioa";
    }
    else if(button=='d'){
        cout<<"Namaskar";
    }
    else if(button=='e'){
        cout<<"Salute";
    }
    else{
        cout<<"I am still working";
    }
}