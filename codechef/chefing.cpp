//
// Created by rishi on 12/15/2019.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int freq[26];
        memset(freq,0,sizeof(freq));
        int temp=n;
        int spl;
        while(n--)
        {
            string str;
            cin>>str;
            int counts[26];
            memset(counts,0,sizeof(counts));
            for(int i=0;i<str.length();i++)
            {
                if(counts[str[i]-'a']==0)
                {
                    freq[str[i]-'a']++;
                    counts[str[i]-'a']=1;
                }
            }
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]==temp)
            {
                ++spl;
            }
        }
        cout<<spl<<endl;
    }
    return 0;
}
