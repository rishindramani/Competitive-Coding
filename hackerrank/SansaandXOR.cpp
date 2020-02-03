//
// Created by rishi on 1/9/2020.
//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n + 2];
        for (ll i = 0; i < n; i++) \
        {
            cin >> a[i];
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i = i + 2)
        {
            cnt = cnt ^ a[i];
        }
        if (n % 2 == 0) {
            cnt = 0;
        }
            cout <<cnt<<endl;
    }
    return 0;
}