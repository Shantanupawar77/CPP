#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
        Point(int a,int b){
            x=a;
            y=b;
        }
        void displayPoint(){
            cout<<"The point is"<<"("<<x<<","<<y<<")"<<endl;
        }

};
int main(){
    Point p(2,5);
    p.displayPoint();
   
    Point q(5,11);
    q.displayPoint();
    
    return 0;
}