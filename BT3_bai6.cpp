#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	int stop = n*n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	int i=0;
	int j=(n-1)/2;
	a[i][j]=1;
	for(int t=2;t<=stop;t++){
		i--;j++;
		if(i<0)i=i+n;
		if(j>=n)j=j-n;
		if(a[i][j]==0)a[i][j]=t;
		else{
			i++;
			if(i>=n)i=i-n;
			a[i][j]=t;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<10)cout<<" "<<a[i][j]<<" ";
			else cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}