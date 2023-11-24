#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id of employee:"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Id of the employee is  "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount(){
            cout<<"The value of count is "<<count<<endl;
        }




};
int Employee::count;
int main(){
    Employee rohan,shantanu,rohit;
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    shantanu.setData();
    shantanu.getData();
    Employee::getCount();
    rohit.setData();
    rohit.getData();
    Employee::getCount();
    
    return 0;
}