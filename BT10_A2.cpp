#include <iostream>
using namespace std;
struct Point{
    int x,y;
};

void print(Point &p){
	cin>>p.x>>p.y;
	cout<<"Ban dau: "<<p.x<<" "<<p.y<<endl;
}
//truyen tham tri
void Thamtri(Point p){
    p.x += 5;
    p.y += 5;
}
//truyen tham chieu
void Thamchieu(Point &p){
    p.x += 5;
    p.y += 5;
}

int main(){
    Point point;
    print(point);
    Thamtri(point);
    cout<<"\nTruyen tham tri ta co: "<<point.x<<" "<<point.y<<endl;
    Thamchieu(point);
    cout<<"\nTruyen tham chieu ta co: "<<point.x<<" "<<point.y<<endl;
}
