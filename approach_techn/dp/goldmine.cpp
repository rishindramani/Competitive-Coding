//
// Created by Rishi on 14-Oct-19.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        //input
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }

        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(j==0)
                {
                    continue;
                }
                int m=0;
                if(i-1>=0)
                {
                    m=a[i-1][j-1];
                }
                if(i+1<n)
                {
                    m=max(m,a[i+1][j-1]);
                }
                if(j-1>=0)
                {
                    m = max(m,a[i][j-1]);
                }
                a[i][j]+=m;

            }
        }
        int fin = -1;
        for(int i=0;i<n;i++)
        {
            fin = max(fin,a[i][m-1]);
        }
        cout<<fin<<endl;
    }
    return 0;
}