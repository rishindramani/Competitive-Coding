//
// Created by Rishi on 16-Oct-19.
//
// NAIVE

#include<bits/stdc++.h>
using namespace std;
int inv(int a, int m)
{
    //a = a%m; ?????
    for (int x=1; x<m; x++)
        if ((a*x) % m == 1)
            return x;
}


int main()
{
    int a = 5, m = 11;
    cout << inv(a, m);
    return 0;
}