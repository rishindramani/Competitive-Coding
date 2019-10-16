//
// Created by Rishi on 16-Oct-19.
//
#include<bits/stdc++.h>
// product of two primes
using namespace std;

bool cntf(int n)
{
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i)
        {
            c++;
        }
        if(c>3)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>num;

    if(cntf(num))
    {
        for(i=2;i<=n;i++)
        {

        }


