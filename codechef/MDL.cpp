//
// Created by rishi on 12/23/2019.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t ;
    cin >> t ;
    while(t--)
    {
        vector<int> v1 , v2 ;
        vector<int>
        int n,num ;
        cin >> n ;
        num=n;
        while(num--)
        {
            int x ;
            cin >>  x;
            v1.push_back(x) ;
            v2.push_back(x) ;//orig
        }
        sort(v1.begin() ,v1.end()) ;
        int min = v1[0];
        int max = v1[n-1];
        int a = 0 ;
        int b = 0 ;
        for(int i = 0 ;i<v2.size(); i++)
        {
            if(v2[i]==min)
            {
                a = i ;
            }
            if(v2[i]==max)
            {
                b = i ;
            }
        }

        if(a>b)
        {
            cout << max << " " << min << endl ;
        }
        else
        {
            cout << min << " " << max << endl ;
        }
    }
    return 0;
}
/*
WITHOUT SORT
#include <iostream>
using namespace std;

int main(){
    long long q;
    cin>>q;
    while(q --){
        int n;
        cin>>n;
        int mn=1000000,mx=0,s,t,a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(mn>a[i]){
                mn=a[i];
                s=i;
            }
            if(mx<a[i]){
                mx=a[i];
                t=i;
            }
        }
        if(s<t){
            cout<<mn<<" "<<mx<<endl;
        }
        else{
            cout<<mx<<" "<<mn<<endl;
        }
    }
}
*/