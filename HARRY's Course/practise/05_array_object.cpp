#include<iostream>
using namespace std;
class Employee{
    int id;
    public:
        void setId(){
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
        }
        void getId(){
            cout<<"The id of the employee is "<<id<<endl;
            
        }

};
int main(){
    Employee FB[4];
    for(int i=0;i<4;i++){
        FB[i].setId();
        FB[i].getId();
    }
    
    return 0;
}