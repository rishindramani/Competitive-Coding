//
// Created by rishi on 12/28/2019.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t ;
    string s,s1="",s2="";
    cin >> t;
    while(t--)
    {

        cin>>s;
        s1="";
        s2="";
        map<char,int>m;
        s1="";
        for(int i=0;i<s.length();i++)
        {
         m[s[i]]++;
         if(i>0)
         {
             if(s[i]!=s[i-1])
             {
                 s1=s1+s[i-1];
                 int n=m[s[i-1]];
                 s2=s2+s1;
             }
         }
        }
        s1=s1+s[s.length()-1];
        s1=to_string(m[s[s.length()-1]]);
        s1=s1+s2;
        if(s1.length()<s.length())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    }