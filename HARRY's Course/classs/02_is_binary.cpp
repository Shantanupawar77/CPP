#include<iostream>
using namespace std;
class binary{
    string s;
    public:
        void read();
        void chk_bin();
        void ones_complement();
        void display();
};
void binary ::read(){
    cout<<"Enter the binary number"<<endl;
    cin>>s;

}
void binary ::chk_bin(){
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid binary format";
            exit(0);
        }
    }
}
void binary ::ones_complement(){
    chk_bin();
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else if(s.at(i)=='0'){
            s.at(i)='1';
        }
    }
    
}
void binary ::display(){
    cout<<"Displaying your binary number"<<endl;
    for (int  i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl; 
}
int main(){
    binary b1;
    b1.read();
    
    
    b1.ones_complement();
    b1.display();
    
    return 0;
}