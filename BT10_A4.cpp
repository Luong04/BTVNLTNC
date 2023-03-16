#include<iostream>
using namespace std;
struct Point{
	int x ;
	int y ;
	void nhap()
	{
	    cout<<"nhap x,y: ";
	    cin>>x>>y;
	}
};

int main(){
	Point point;
	point.nhap();
	cout<<&point<<endl;
	cout<<&point.x<<endl;
	cout<<&point.y<<endl;
	return 0;
}

