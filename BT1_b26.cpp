//C> bai 26
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	double avg;
	int sum=0;
	int max=-10000,min=10000;
	for(int i = 0; i < n;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]>max)max = a[i];
		if(a[i]<min)min = a[i];
	}
	avg = (double)sum/n;
	cout<<"Mean: "<<avg<<endl;
	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
}