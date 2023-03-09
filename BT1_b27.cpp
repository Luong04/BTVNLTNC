#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k=0;
	while(k!=-1) {
		int n;
		cin>>n;
		if(n>=0 && n%5==0)	cout<<n/5<<endl;
		else cout<<-1<<endl;
		k=n;
	}
	cout<<"Bye";
}