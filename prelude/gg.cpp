//
// Created by Rishi on 30-Sep-19.
//
#include <bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
    if(n==1)
        return  1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    long long int x=fact(n);
    cout<<x<<endl;
    while(x!=0)
    {
        int a = x % 10;
        if (a != 0)
        {
            cout << a;
            break;
        }
        x = x / 10;
    }
    return 0;
    }

