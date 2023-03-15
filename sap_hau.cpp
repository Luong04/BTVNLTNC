#include<iostream>
using namespace std;
 int n;
bool check(int a[100][100],int row,int col) {
    for(int i=1;i<=col;i++) {
        if(a[row][i]==1) {
            return false;
        }

    }
    for(int i=row,j=col;i>=1&&j>=1;i--,j--) {
        if(a[i][j]==1) {
            return false;
        }


    }
    for(int i=row,j=col;i<=n&&j>=1;i++,j--)
    {
        if(a[i][j]==1) {
            return false;
        }

    }
    return true;
}
bool thu(int a[100][100],int col)
{
    if(col>=n+1) {
        return 1;
    }
    for(int i=1;i<=n;i++) {
        if(check(a,i,col))
        {
            a[i][col]=1;
            if(thu(a,col+1)) {
                return true;
            }
            a[i][col]=0;
        }
    }
}
int main()
{
    int a[100][100];

    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            a[i][j]=0;
        }
    }
    thu(a,1);
     for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}