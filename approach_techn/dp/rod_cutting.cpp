//
// Created by Rishi on 14-Oct-19.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,max1;
cin>>t;
while(t--)
{

int n;
cin>>n;
int a[n];
int  v[n+1];
a[0]=0;
for(int i=1;i<n+1;i++)
{
cin>>a[i];
}
v[0]=0;
for(int i=1;i<n+1;i++){
max1=-100;
for(int j=1;j<=i;j++)
{

max1=max(max1,(a[j]+v[i-j]));
}
v[i]=max1;
}
cout<<v[n]<<endl;
}
return 0;
}