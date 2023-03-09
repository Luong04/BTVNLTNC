#include<bits/stdc++.h>
using namespace std;

int main()
{
double a,b,c,d,e,k;
cin>>a>>b>>c>>d>>e;
double avg = (double)(a+b+c+d+e)/5;
double da = fabs(avg - a);
double db = fabs(avg - b);
double dc = fabs(avg - c);
double dd = fabs(avg - d);
double de = fabs(avg - e);
double dmin = da; k = a;
if(dmin>db){dmin = db;k = b;}
if(dmin>dc){dmin = dc;k = c;}
if(dmin>dd){dmin = dd;k = d;}
if(dmin>de){dmin = de;k = e;}
cout<<k;
return 0;
}