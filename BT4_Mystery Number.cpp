#include<bits/stdc++.h>
using namespace std;
int main(){
	int result;
	int n;
	cin>>n;
	int a[n];
	int b[n+1];
	int countsort[100000];
	fill_n(countsort,100000,0);
	for(int i = 0 ;i<n;i++){
		cin>>a[i];
		countsort[a[i]]++;
	}
	for(int i = 0;i<n+1;i++){
		cin>>b[i];
		countsort[b[i]]--;
	}
	for(int i=0 ;i<n+1;i++){
		if(countsort[b[i]]==-1) 
		{
		cout<<b[i];break;}
	}
}