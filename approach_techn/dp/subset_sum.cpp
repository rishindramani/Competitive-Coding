//
// Created by Rishi on 14-Oct-19.
//
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
void sub(ll arr[],ll a,ll b,ll sum)
{
    if(a>b)
    {
        v.push_back(sum);
        return;
    }

    sub(arr,a+1,b,sum);

    sub(arr,a+1,b,sum+arr[a]);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        v.clear();
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sub(arr,0,n-1,0);
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}