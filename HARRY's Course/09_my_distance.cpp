#include<iostream>
#include<math.h>
using namespace std;
class Point{
    int x,y;
    friend void distance(Point,Point);
    public:
        Point(int a,int b){
            x=a;
            y=b;
        }
        void print(){
            cout<<"The point is (" <<x<<","<<y<<")"<<endl;
        }

};
void distance( Point p,Point q){
    float x_dist=pow((p.x-q.x),2);
    float y_dist=pow((p.y-q.y),2);
    float sum=x_dist+y_dist;
    float sumDist=pow(sum,0.5);
    cout<<"The distance between above two points is "<<sumDist<<endl;


}
int main(){
    Point p(0,1);
    p.print();
    Point q(0,6);
    q.print();
    distance(p,q);
    return 0;
}