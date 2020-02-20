//
// Created by rishi on 11/25/2019.
//
#include<bits/stdc++.h>
using namespace std;
void knapsack(int n,int w,int val[],int wt[])
{
    int mat[n][w+1];
    memset(mat,0,sizeof(mat));
    for(int i=1;i<=w;i++)
    {
        if(i == wt[0])
            mat[0][i] = val[0];
        else
            mat[0][i] = mat[0][i-1];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(wt[i] > j)
                mat[i][j] = mat[i-1][j];
            else
                mat[i][j] = max(mat[i-1][j], val[i] + mat[i-1][j-wt[i]]);
        }
    }
    cout << mat[n-1][w];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,w;
        cin >> n >> w;
        int val[n],wt[n];
        for(int i=0;i<n;i++)
            cin >> val[i];
        for(int i=0;i<n;i++)
            cin >> wt[i];
        knapsack(n,w,val,wt);
        cout << "\n";
    }
    return 0;
}