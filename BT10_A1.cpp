#include<iostream>
using namespace std;
struct Point{
	int x ;
	int y ;
};

void print(Point &P){
	cin>>P.x>>P.y;
	cout<<P.x<<" "<<P.y;
}

int main(){
	Point point;
	print(point);
	return 0;
}
