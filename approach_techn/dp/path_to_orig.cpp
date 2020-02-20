//
// Created by rishi on 11/25/2019.
//

#include <bits/stdc++.h>
using namespace std;
int countpaths(int n,int m){
    if(n==0 || m==0)
        return 1;

    return (countpaths(n-1,m)+countpaths(n,m-1));
}
int main() {
    //code
    int t,n,m;
    cin>>t;
    while(t>0){
        cin>>n>>m;

        cout<<countpaths(n,m)<<endl;
        t--;
    }
    return 0;
}