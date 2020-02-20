//
// Created by rishi on 12/16/2019.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,p,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0;
       while(n--)
       {
            cin>>p>>s;
            if(p<9)
            {
                if(p==1&& s1<s)
                {
                    s1=s;

                }
                if(p==2&& s2<s)
                {
                    s2=s;
                }
                if(p==3&& s3<s)
                {
                    s3=s;
                }
                if(p==4&& s4<s)
                {
                    s4=s;
                }
                if(p==5&& s5<s)
                {
                    s5=s;
                }
                if(p==6&& s6<s)
                {
                    s6=s;
                }
                if(p==7&& s7<s)
                {
                    s7=s;
                }
                if(p==8&& s8<s)
                {
                    s8=s;
                }
            }
        }
        cout<<s1+s2+s3+s4+s5+s6+s7+s8<<endl;
    }
    return 0;
}