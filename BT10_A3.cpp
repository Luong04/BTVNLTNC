#include <iostream>
using namespace std;
struct Point{
    double x,y;
    void nhap(){
        cin>>this->x>>this->y;
    }
    void print(){
        cout<<this->x<<" "<<this->y;
    }
};

Point mid_point(const Point &P1,const Point &P2){
    Point t;
    t.x = (P1.x + P2.x)/2;
    t.y = (P1.y + P2.y)/2;
    return t;
}

int main(){
    Point P1;
    Point P2;
    P1.nhap();
    P2.nhap();
    Point mid = mid_point(P1,P2);
    mid.print();
    return 0;
}


