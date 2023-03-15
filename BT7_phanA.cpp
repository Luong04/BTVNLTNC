#include<iostream>
using namespace std;

int *parr(){
	int *arr = new int ;
	for(int i = 0; i < 10;i++){
		arr[i] = 2 * i;
	}
	return arr;
}
int main(){
	int *a = new int;	
	a = parr();
	for(int i = 0; i <10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}