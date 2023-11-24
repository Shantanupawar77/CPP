#include<iostream>
using namespace std;
// struct Student{
//     int roll_no;
//     float cgpa;
//     char favchar;
//     char division;
// };
// int main(){
//     struct Student shantanu;
//     shantanu.roll_no=46;    
//     shantanu.cgpa=9.52;    
//     shantanu.favchar='n';    
//     shantanu.division='C';    
//     cout<<"The roll no of shantanu is "<<shantanu.roll_no<<"."<<endl;  
//     cout<<"The cgpa of shantanu is "<<shantanu.cgpa<<"."<<endl;
//     cout<<"The favourite character of shantanu is "<<shantanu.favchar<<"."<<endl; 
//     cout<<"The division of shantanu is "<<shantanu.division<<"."<<endl;
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;
//     struct Student varun;
//     varun.roll_no=43;    
//     varun.cgpa=9.51;    
//     varun.favchar='y';    
//     varun.division='B';    
//     cout<<"The roll no of varun is "<<varun.roll_no<<"."<<endl;  
//     cout<<"The cgpa of varun is "<<varun.cgpa<<"."<<endl;
//     cout<<"The favourite character of varun is "<<varun.favchar<<"."<<endl; 
//     cout<<"The division of varun is "<<varun.division<<"."<<endl;
    

    
//     return 0;
// }

//second method

typedef struct Student{
    int roll_no;
    float cgpa;
    char favchar;
    char division;
}st;
int main(){
    st shantanu;
    shantanu.roll_no=46;    
    shantanu.cgpa=9.52;    
    shantanu.favchar='n';    
    shantanu.division='C';    
    cout<<"The roll no of shantanu is "<<shantanu.roll_no<<"."<<endl;  
    cout<<"The cgpa of shantanu is "<<shantanu.cgpa<<"."<<endl;
    cout<<"The favourite character of shantanu is "<<shantanu.favchar<<"."<<endl; 
    cout<<"The division of shantanu is "<<shantanu.division<<"."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    st varun;
    varun.roll_no=43;    
    varun.cgpa=9.51;    
    varun.favchar='y';    
    varun.division='B';    
    cout<<"The roll no of varun is "<<varun.roll_no<<"."<<endl;  
    cout<<"The cgpa of varun is "<<varun.cgpa<<"."<<endl;
    cout<<"The favourite character of varun is "<<varun.favchar<<"."<<endl; 
    cout<<"The division of varun is "<<varun.division<<"."<<endl;
    

    
    return 0;
}