#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n==1||n==0)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int t,n,u,l;
    cin>>t;
    while(t--)
    {
        cin>>n;//n=14

        for(int i=0;;i++)
        {
            u=n+i;//15
            l=n-i;//13
            if(prime(u) && prime(l))
            {
                cout<<l<<"\n";
                break;
            }
            if(prime(u))
            {
                cout<<u<<"\n";
                break;
            }
            if(prime(l))
            {
                cout<<l<<"\n";
                break;
            }
        }
    }
    return 0;
}