//
// Created by rishi on 11/25/2019.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n1, n2;
        string s1, s2;
        cin >> n1 >> n2;
        cin >> s1;
        cin >> s2;
        int l1 = s1.length();
        int l2 = s2.length();
        int LCS[n1+1][n2+1];
        for(int i = 0;i<n1+1;i++)
            LCS[i][0]=0;
        for(int i = 0;i<n2+1;i++)
            LCS[0][i]=0;
        for(int i = 1;i<n1+1;i++)
        {
            for(int j = 1;j<n2+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                    LCS[i][j] = 1+LCS[i-1][j-1];
                else
                    LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
        cout << LCS[l1][l2];
        cout << endl;

    }
    return 0;
}