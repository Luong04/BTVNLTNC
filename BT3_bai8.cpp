#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int t[N];
	long int sum=0;
	for(int i=0;i<N;i++){
		cin>>t[i];
	}
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-1;j++){
			if(t[j]>t[j+1]) swap(t[j],t[j+1]);
		}
	}
	for(int i=0;i<N;i++){
		sum+=t[i]*(N-i-1);
	}
	cout<<"Tong thoi gian cho doi "<<sum;
}