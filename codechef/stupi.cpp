//
// Created by rishi on 12/28/2019.
//
#include<bits/stdc++.h>
using namespace std;

int maxi(int w,int x,int y)
{
    return w > x? (w > y? w: y): (x > y? x: y);

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,a,b,c ;
    cin >> t;
    while(t--)
    {

        cin>>n;
        cin>>a>>b>>c;
        while(a!=0||b!=0||c!=0)
        {
          int r=maxi(a,b,c);
          if(r<=n)
          {


          }
        }
        }