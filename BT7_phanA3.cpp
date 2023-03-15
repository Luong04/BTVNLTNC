#include<bits/stdc++.h>
using namespace std;

int count_even(int *arr,int n){
	int count = 0;
	for(int i =0 ;i<n; i++){
		if(arr[i]%2 == 0) count ++;
	}
	return count ;
}

int main(){
	int  *arr = new int[8]{3,5,6,4,8,2,1,9};
	int n = sizeof(arr);
	cout<<count_even(arr,n);
	return 0;
}