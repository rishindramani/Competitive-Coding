//
// Created by rishi on 12/22/2019.
//
#include<bits/stdc++.h>
using namespace std;
int freq(vector<int>r,int num)
{
    int c=0;
    unordered_map<int,int>m;
    for(int i=0;i<num;i++)
    {
        m[r[i]]++;
    }

    for (auto i : m)
    {
        if (c < i.second)
        {
            c = i.second;
        }
    }
    return(num-c);
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        cout << freq(v, n)<<endl;
    }
    return 0;
}