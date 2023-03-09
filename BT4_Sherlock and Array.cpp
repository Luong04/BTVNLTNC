#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++) {
		int n;
		cin>>n;
		int arr[n];
		int sum = 0;
		int sumleft[n];
		fill_n(sumleft, n, 0);
		for(int j = 0; j < n; j++) {
			cin>>arr[j];
			sumleft[j] = sum;
			sum += arr[j];
		}
		int check = 0;
		for(int j = 0; j < n ; j++) {
			if((sum - arr[j])%2==0 && (sum - arr[j])/2 == sumleft[j]) {
				cout<<"YES"<<endl;
				check = 1;
				break;
			}
		}
		if(check == 0) cout<<"NO"<<endl;

	}
}