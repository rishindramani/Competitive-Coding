//
// Created by rishi on 11/25/2019.
//

#include<bits/stdc++.h>
using namespace std;

int rem(string s)
{
    int n=s.length();
    int d[n][n];
    memset(d,0,sizeof(d));
    int i,c,j;

    for(c=2;c<=n;c++)
    {
        for(i=0;i<n-c+1;i++)
        {
            j=i+c-1;
            if(s[i]==s[j])
            {
                if(c==2)
                {
                    d[i][j]=0;
                }
                else
                {
                    d[i][j]=d[i+1][j-1];
                }
            }
            else
            {
                if(c==2)
                    d[i][j]=1;
                else
                    d[i][j]=1+min(d[i+1][j],d[i][j-1]);
            }

        }
    }
    return d[0][n-1];
}
int main() {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        cout<<rem(s)<<endl;
    }
    return 0;
}