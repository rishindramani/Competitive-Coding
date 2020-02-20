//
// Created by rishi on 2/8/2020.
//
#include<bits/stdc++.h>
#define ll long long
#define enigma ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<ll> maxi(vector < vector<ll> > arr2d)
{
    vector<ll> maxm(4);
    ll k=0;
    for (ll i = 0; i < 4; i++) {
        // initialize the maximum element
        // with 0
        int maxcol = arr2d[0][i];

        // Run the inner loop for rows
        for (ll j = 1; j < 4; j++)
        {
            // check if any element is greater
            // than the maximum element
            // of the column and replace it
            if (arr2d[j][i] > maxcol)
                maxcol = arr2d[j][i];
        }
         maxm[k]=maxcol;
         k++;
        // print the largest element of the column

    }
    return maxm;
}

int main()
{
    enigma;
    ll t;
    cin>>t;
    while(t--) {
        ll n, freq;
        char ch;
        cin >> n;
        vector<vector<int> > v(4, vector<int>(4, 0));
        for (ll k = 1; k <= n; k++) {
            cin >> ch >> freq;//input freq
            if (ch == 'A') {
                if (freq == 12)
                    v[0][0]++;
                else if (freq == 3)
                    v[0][1]++;
                else if (freq == 6)
                    v[0][2]++;
                else if (freq == 9)
                    v[0][3]++;
                else {}

            } else if (ch == 'B') {
                if (freq == 12)
                    v[1][0]++;
                else if (freq == 3)
                    v[1][1]++;
                else if (freq == 6)
                    v[1][2]++;
                else if (freq == 9)
                    v[1][3]++;
                else {}
            } else if (ch == 'C') {
                if (freq == 12)
                    v[2][0]++;
                else if (freq == 3)
                    v[2][1]++;
                else if (freq == 6)
                    v[2][2]++;
                else if (freq == 9)
                    v[2][3]++;
                else {}
            } else if (ch == 'D') {
                if (freq == 12)
                    v[3][0]++;
                else if (freq == 3)
                    v[3][1]++;
                else if (freq == 6)
                    v[3][2]++;
                else if (freq == 9)
                    v[3][3]++;
                else {}
            } else {}

        }


        for (ll i = 0; i < 4; i++) {
            for (ll j = 0; j < 4; j++) {
                cout << v[i][j];
            }
            cout << endl;
        }
    }
        return 0;
    }