//
// Created by rishi on 2/18/2020.
//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> prime(ll n)
{
    if(n==1||n==0)
    {
        return false;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}



int main() {
    ll n, q, a, b;
    cin >> n;
    vector<ll> a;
    for(ll i=0;i<n;i++)
    {
     cin>>a[i];
    }
    vector<ll> x;
    for(ll i=0;i<n;i++)
    {
        if(prime[a[i]]==true)
            x.push_back(a[i]);
    }
   sort(x.begin(),x.end());
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin >> a >> b;
        if (a == 1)
            v.push_back(b);
        if (a == 2)
            for(ll i=0;i<n;i++)
            {
                if(prime[a[i]]==true)
                    x.push_back(a[i]);
            }
            cout << x[b - 1]<<endl;

    }
    return 0;
}


}
    /*
    int v[n];
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<ll> x;
    for(ll i=0;i<n;i++)
    {
        if(prime[v[i]]==true)
            x.push_back(v[i]);
    }
sort(x.begin(),x.end());

    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin >> a >> b;
        if (a == 1)
            v.push_back(b);
        if (a == 2)
            cout << x[b - 1]<<endl;

    }
        return 0;
}
*/