#include<bits/stdc++.h>
using namespace std;
bool ngto(int n){
	int x=0;
	for (int i=2;i<n;i++){
		if(n%i==0){return false;break;}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	if(ngto(n))cout<<"yes";
	else cout<<"no";
}
