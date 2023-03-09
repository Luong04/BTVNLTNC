//B> bai 23
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b;
cin>>a>>b;
int great,small,sum,sub;
sum = a+b;
sub = abs(a-b);
great = (sum + sub)/2;

small = sum - great;
cout<<great;
return 0;
}