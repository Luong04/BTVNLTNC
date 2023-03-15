#include <bits/stdc++.h>

using namespace std;

int n, sum = 0;
vector<int> a;

void print()
{
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;
}

void Tong(int m)
{
    for(int i = m; i >= 1; i--){
        sum += i;
        a.push_back(i);
        if(sum == n) print();
        else if(sum < n) Tong(i);

        sum -= i;
        a.pop_back();
    }
}

int main()
{
    cin >> n;
    Tong(n);
    return 0;
}