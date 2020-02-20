//
// Created by rishi on 11/25/2019.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n1,n2;
    string s1,s2,s3="";
    int del=0,e=0;
cin>>t;
while(t--)
{
    s3="";
    s1="";
    s2="";
    e=0;
    del=0;
    cin>>n1>>n2;
    cin >> s1 >> s2;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] == s2[i])
        {
            s3 = s3 + s1[i];
        } else {
            s3 = s3 + s2[i];
            e++;
        }
        if (s3.compare(s2) == 0) {
            del = s1.length() - (i + 1);
            break;
        }

    }
    cout<<(e+del)<<endl;
    cout << e << " edit " << del << " delete"<<endl;
}
return 0;
    }