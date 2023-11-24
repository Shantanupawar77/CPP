#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the employee number "<<count<<" is "<<id<<endl;
        }
        static void getCount(void){
            cout<<"The count of employee is "<<count<<endl;
        }

};
int Employee ::count=100;
int main(){
    Employee harry,varun,shantanu;
    
    harry.setData();
    harry.getData();
    Employee::getCount();
    
    
    varun.setData();
    varun.getData();
    Employee::getCount();

    shantanu.setData();
    shantanu.getData();

    Employee::getCount();
    
    return 0;
}