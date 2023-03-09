#include<bits\stdc++.h>
using namespace std; 
int main(){
	int m,n;
	cin>>m>>n;
	char a[m][n];
	int b[m][n];
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='.'){
				if(a[i][j+1]=='*'&&j+1<n)b[i][j]++;
				if(a[i][j-1]=='*'&&j>0)b[i][j]++;
				if(a[i+1][j+1]=='*'&&i+1<m&&j+1<n)b[i][j]++;
				if(a[i-1][j+1]=='*'&&i>0&&j+1<n)b[i][j]++;
				if(a[i-1][j]=='*'&&i>0)b[i][j]++;
				if(a[i+1][j]=='*')b[i+1<m][j]++;
				if(a[i-1][j-1]=='*')b[i>0][j>0]++;
				if(a[i+1][j-1]=='*')b[i+1<m][j>0]++;
				stringstream ss;
				ss<<b[i][j];
				ss>>a[i][j];
			}
		}
	}
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}