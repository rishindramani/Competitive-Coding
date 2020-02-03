//
// Created by rishi on 1/9/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0 ; i < s.length()- 1; i++)
        {
            if (s[i] == s[i + 1])
            {
            c++;
            }
        }
        cout <<c<< endl;
    }
    return 0;
}