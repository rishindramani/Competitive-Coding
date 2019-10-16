//
// Created by Rishi on 30-Sep-19.
//
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n==1||n==0)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int power(int n)
{
    int arr[n];
    for (int i = 2; i <= n; i++)
    {
           arr[i]=0;
    }
    for (int i = 2; i <= n; i++)
    {
        res = 0;
        if (prime(i))
        {
            int x = n;
            while (x != 1)
            {
                int t = floor(x / i);
                res = res + t;
                x = t;
            }
        }
        arr[i] = res;
    }
}
int main()
{
    cin>>n;




















}
