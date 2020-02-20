//
// Created by rishi on 11/25/2019.
//

#include <iostream>
using namespace std;

int editDistDP(string str1, string str2, int m, int n)
{
    int dp[m+1][n+1];

    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i==0)
                dp[i][j] = j;

            else if (j==0)
                dp[i][j] = i;


            else if (str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];

            else
                dp[i][j] = 1 + min(dp[i][j-1],  // Insert
                                   min(  dp[i-1][j],  // Remove
                                         dp[i-1][j-1])); // Replace
        }
    }

    return dp[m][n];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2;
        cin>>l1>>l2;
        string str1;
        string str2;

        cin>>str1>>str2;

        cout <<editDistDP( str1 ,str2 ,l1, l2)<<endl;


    }
    return 0;
}
