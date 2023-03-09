#include<bits/stdc++.h>
using namespace std;

bool check(string pass){
	int leng = pass.size();
	if(leng % 2 == 0) return 0;
	for(int i = 0;i < leng/2;i++){
		if(pass[i] != pass[leng - i - 1]) return 0; break;
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	string pass[n];
	for(int i=0; i<n; i++) {
		cin>>pass[i];
	}
	for(int i = 0; i < n;i++){
		if(check(pass[i])){
			int leng = pass[i].size();
			cout<< leng<<" "<<pass[i][leng/2]<<" ";
		}
	}
return 0;
}