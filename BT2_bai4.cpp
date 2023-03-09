#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>chuoi;
	int k=0;
	while (k>=0){
		int tmp;
		cin>>tmp;
		if(tmp!=k)chuoi.push_back(tmp);
		k=tmp;
	}
	for(int i=0;i<chuoi.size();i++)
	{
		cout<<chuoi[i]<<" ";
	}
}