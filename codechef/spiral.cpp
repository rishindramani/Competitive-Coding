//
// Created by rishi on 12/16/2019.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;

cin>>n;
int a[n][n];//=new int[n][n];
int r=0,c=-1,p;
int x=0;
for(i=0;i<n;i++)
{
p=(int)pow(-1,i);
for(j=0;j<(n-i);j++)
{
c=c+(1*p);
a[r][c]=++x;
}

for(j=0;j<(n-1-i);j++)
{
r=r+(1*p);
a[r][c]=++x;
}
}
for(i=0;i<n;i++) {

    for (j = 0; j < n; j++) {
        if (a[i][j] < 10)
        {
            cout << a[i][j] << "\t";
        } else {
            cout << a[i][j] << "\t";
        }
    }
    cout << endl;
}
return 0;
    }