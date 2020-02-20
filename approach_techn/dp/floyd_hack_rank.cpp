//
// Created by rishi on 11/25/2019.
//
//hackerrank
#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n][n];
    ll l,k;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            string s;
            cin>>s;
            if(s[0]=='I')
                a[i][j]=10000000;
            else
                a[i][j]=stoi(s);
        }

    }

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j];
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[i][j]==10000000)
                cout<<"INF"<<" ";
            else
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//GFG
/*
#define ll long long
#define ld long double
#define pll pair<long long,long long>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define F(i,a,b) for(ll i=a;i<=b;i++)
#define RF(i,a,b) for(ll i=a;i>=b;i--)
#define in(a,n) F(i,0,n-1)cin>>a[i]
#define out(a,n) F(i,0,n-1)cout<<a[i]<<" ";cout<<endl

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][n];
        ll l,k;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                string s;
                cin>>s;
                if(s[0]=='I')
                    a[i][j]=10000000;
                else
                    a[i][j]=stoi(s);
            }

        }
        //cout<<l<<k;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(a[i][j]==10000000)
                    cout<<"INF"<<" ";
                else
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
*/
