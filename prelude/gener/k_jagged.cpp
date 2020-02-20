//
// Created by Rishi on 23-Oct-19.
//
#include<bits/stdc++.h>
using namespace std;
bool iskjagged(int n,int k)
{
    if(n%2==0)
    {
        return k<=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if (n % i == 0)
        {
            return k<=i;
        }
    }
   // if(n>2)
    //{
return n>=k;
    //}
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<iskjagged(n,k);
    return 0;
}