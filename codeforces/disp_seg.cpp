//
// Created by rishi on 1/30/2020.
// https://codeforces.com/contest/1295/problem/A
//
#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    int x=(n/log(n));
    return x;
}

int main()
{
    int num;
    while(cin>>num)
    cout<<countPrimes(num)<<endl;
    return 0;
}