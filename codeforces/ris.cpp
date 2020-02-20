//
// Created by rishi on 2/2/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0,k=0;
    while(t--)
    {
        c=0;
        k=0;
        int n;

        cin >> n;
        string s;
        int a[n];
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] - '0') % 2 != 0)
            {
                a[k]=s[i]-'0';
                k++;
                if(k>1)
                    break;
            }
        }
        if(k<1)
        {
            cout<<"-1";
        }

        cout<<a[0]<<a[1]<<endl;
    }
    return 0;
    }

