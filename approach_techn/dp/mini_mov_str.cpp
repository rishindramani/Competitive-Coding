//
// Created by rishi on 11/25/2019.
//

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int fun(string s){
    int len = s.length();
    int dp[len];
    for(int i =0;i<len;i++){
        dp[i] = INT_MAX;
    }
    string s1,s2;
    dp[0] = 1;
    s1+=s[0];
    for(int i =1;i<len;i++){
        s1+=s[i];
        s2 = s.substr(i+1,i+1);
        dp[i] = min(dp[i],dp[i-1]+1);
        if(s1 == s2){
            dp[2*i+1] = min(dp[2*i+1],dp[i]+1);
        }
    }
    return dp[len-1];
}
int main()
{
    int a;
    cin>>a;
    while(a--){
        string s;
        cin>>s;
        cout<<fun(s)<<endl;
    }
    return 0;
}