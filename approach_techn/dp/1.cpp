//
// Created by rishi on 11/25/2019.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,s,k=0,i,c=0;
    while(t--)
    {
        int arr[1000];

        cin>>x>>y;
        s=x+y;
        for( i=2;i<=2000;i++)
        {
            c=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                    c++;
            }
            if(c==0)
                arr[k++]=i;
        }
        for(i=0;i<k;i++)
        {
            if(s<arr[i])
                break;
        }
        cout<<arr[i]-s<<endl;
    }
    return 0;
}