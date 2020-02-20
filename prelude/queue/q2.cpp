//
// Created by Rishi on 22-Oct-19.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d,n;
    cin>>d>>n;
    for(int i=0;i<n;i++)
    {
        if(d%i!=0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
return 0;
}