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
int count(int n)
{
    int count = 0;
    while (n)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        int c = 0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(prime(count(i)))
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}