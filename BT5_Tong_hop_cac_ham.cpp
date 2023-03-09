#include<bits/stdc++.h>
using namespace std;

//bai 5 ham kiem tra so nguyen to
bool ngto(int n)
{
	for (int i = 2;i <= sqrt(n); i++){
		if(n % i == 0)
		{
			return 0; break;
		}
		else return 1;
	}
}

//bai 6a ham tinh uoc chung lon nhat cua 2 so nguyen duong
int gcd(int a, int b)
{
	if(a == 0) {return b;}
	else if(b==0) {return a;}
	else if(a>b)return gcd(a%b , b);
	else if(a<b)return gcd(a , b%a);
}
//bai 6b
bool ngtocungnhau(int a,int b)
{
	if(gcd(a,b)==1)return 1;
	else return 0;	
}

//bai 7 in tam giac
void print(int n)
{
	for(int i = 4; i >= 0; i--)
	{
		for(int j = -4; j <=4 ; j++ )
		{
			if(i + abs(j) <= 4 ) cout<<"*";
			else cout <<" ";
		}
		cout<<endl;
	}
}

//bai 8a
int rnd(double x)
{
	int a;
	if(x-floor(x)>=0.5) a = ceil(x);
	else a = floor(x);	
	return a;
}

//bai 8b
int rnd2(double x)
{
	int a;
	a = x + 0.5;
	return a;
}

//bai 9
int ngaunhien(int n)
{
	int x;
	srand(time(0));
	x = rand() % n;
	return x;
}

//bai 10
void printf(int N)
{
	int mang[N];
	for(int i = 0; i < N; i++)
	{
		srand(time(0));
		mang[i] = rand() % 50;
	}
	for(int i = 0;i < N;i++)
	{
		
	}
}
int main(){
	//test ham
}


