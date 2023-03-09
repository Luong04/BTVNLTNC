//B> bai 17
#include<bits/stdc++.h>
using namespace std;

bool leapYear(int n){
if(n%4 == 0){
if(n%100 == 0&&n%400 !=0)return 0;
else return 1;
}
else return 0;

}
int main(){
int n;
cin>>n;
cout<<leapYear(n);
}