//
// Created by rishi on 11/25/2019.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];

        int dp[n][n];
        for(int i = 0; i < n; i++) dp[i][i] = 0;

        for(int l = 2; l < n; l++) {
            for(int i = 1, j = l; j < n; j++, i++) {
                dp[i][j] = INT_MAX;
                for(int k = i; k < j; k++) {
                    int x = dp[i][k] + dp[k+1][j] + ar[i-1]*ar[k]*ar[j];
                    dp[i][j] = min(dp[i][j], x);
                }
            }
        }
        cout<<dp[1][n-1]<<endl;
    }
    return 0;
}