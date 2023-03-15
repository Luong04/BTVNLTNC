#include<iostream>
using namespace std;

int tim(int l,int r,int x,int * a) {
	int mid=(l+r)/2;
	if(*(a+mid)==x) {
		return mid;
	}
	if(l>r) {
		return 0;
	}
	if(*(a+mid)>x) {
		return tim(mid+1,r,x,a);
	}
	if(*(a+mid)<x) {
		return  tim(l,mid-1,x,a);
	}
}
int main() 
{
	int n;
	int* a=new int[100];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];

	}
	int t;
	cin>>t;
	cout<<tim(0,n-1,t,a);
}