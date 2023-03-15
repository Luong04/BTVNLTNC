#include<bits/stdc++.h>
using namespace std;

int n;
int k;
int Bool[20] = {0};
char A[20];

bool tangdan(){
	int x = 0;
	for(int i=0;i<k - 1;i++){
		if(A[i]>=A[i+1]){x = 1;break;}
	}
	if(x==0) return 1;else return 0;
}
void print(){
	
	for(int i=0; i<k;i++){
        cout<<A[i];
	}
	cout<<" ";
}
void Try(int m,int &count){
    for(int i = 0;i<n;i++){
        if(Bool[i]==0){
        A[m] = 'a' + i;
        Bool[i] = 1;
        if(m == k-1&&tangdan()==1) {print();count++;if(count%10==0)cout<<endl;}
        else Try(m+1,count);
        Bool[i] = 0;
    }
}
}

int main(){
	int count = 0;
	cout<<"Enter n(n is number of letters from letter a): ";
	cin>>n;
	cout<<"Enter k(k is the length of string(<20): ";
	cin>>k;
	cout<<"-----------------------------------"<<endl;
	Try(0,count);
	cout<<"\nTotal of combinations: ";
	cout<<count;
}
