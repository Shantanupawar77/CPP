#include<iostream>
using namespace std;
class Binary{
    string s;
    public:
        void read(void);
        void chkbin(void);
        void onesCom(void);
        void displayBin(void);

};
void Binary :: read(void){
    cout<<"Enter the binary number :"<<endl;
    cin>>s;
}
void Binary :: chkbin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid Binary number.";
            exit(0);
        }
    }
}
void Binary :: onesCom(void){
    chkbin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else if(s.at(i)=='0'){
            s.at(i)='1';
        }
    }
}
void Binary :: displayBin(void){
    cout<<"Displaying your binary number";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    Binary b1;
    b1.read();
    //b1.chkbin();
    b1.onesCom();
    b1.displayBin();
    
    b1.displayBin();
    return 0;
}