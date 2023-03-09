#include<bits/stdc++.h>
using namespace std;

int **tem(int m,int n,int k)
{
	int **arr = new int*[m];
	for(int i=0; i<m; i++) {
		arr[i] = new int[n];
		for(int j=0; j<n; j++) {
			arr[i][j] = 0;
		}
	}
	return arr;
}

int **randmap(int m,int n,int k)
{
	int **arr = new int*[m];
	for(int i=0; i<m; i++) {
		arr[i] = new int[n];
		for(int j=0; j<n; j++) {
			arr[i][j] = 0;
		}
	}
	while (k>0) {
		srand(time(0));
		int i = rand()%m;
		int j = rand()%n;
		while(arr[i][j] == 1) {
			srand(time(0));
			int x = rand()%m;
			int y = rand()%n;
			i = x;
			j = y;
		}
		arr[i][j] = 1;
		k--;
	}
	return arr;
}

void printarr(int **arr, int m, int n)
{
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int countBombsAround(int **arr, int i, int j, int m, int n)
{
	int count = 0;
	if(i>0 && (arr[i-1][j] == 1)) count ++;
	if(i>0 && j>0 && (arr[i-1][j-1] == 1)) count ++;
	if(j>0 && (arr[i][j-1] == 1)) count ++;
	if(i<m-1 && (arr[i+1][j] == 1)) count ++;
	if(i<m-1 && j>0 && (arr[i+1][j-1] == 1)) count ++;
	if(i<m-1 && j<n-1 && (arr[i+1][j+1] == 1)) count ++;
	if(i>0 && j<n-1 && (arr[i-1][j+1] == 1)) count ++;
	if(j<n-1 && (arr[i][j+1] == 1)) count ++;
	return count;
}
int main()
{
	cout<<"HINT: 0 IS UNKNONW, 1 IS BOMB!"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Input row, column, number of bombs: ";
	int m,n,k;
	cin>>m>>n>>k;
	int **RandMap = randmap(m,n,k);
	int **Map = tem(m,n,k);
	while (k>0) {
		int x,y;
		cout<<"\nInput address (row, column): ";
		cin>>x>>y;
		if(RandMap[x][y]==1) {
			cout<<"\nYOU'RE DEAD!"<<endl;
			printarr(RandMap,m,n);
			break;
		}
		else if(RandMap[x][y]==0) {
			Map[x][y] = 1;
			cout<<"Number of bombs around: "<<countBombsAround(RandMap,x,y,m,n)<<endl;
			printarr(Map,m,n);
			k--;
		}
	}
	if(k==0) cout<<"YOU WON!";
	return 0;
}