//
// Created by Rishi on 06-Nov-19.
//
#include <bits/stdc++.h>
using namespace std;
int pri(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int greatest(int n)
{
    int res = -1;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (pri(i))
            {
                res = max(res, i);
            }
            if (pri(n / i))+
            {
                res = max(res, n / i);
            }
        }
    }
    return res;
}
bool check(int n, int p)//isp
{
    return greatest(n) <= p;
}
int main()
{
    int n, p;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cin >> p;
    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((arr[i] > max)==true && (check(arr[i], p))==true)
        {
            max = arr[i];
        }
    }
    int a, b;
    for (int i = max; i >= 0; --i)
        if (pri(i))
        {
            a = i;
            break;
        }
    for (int i = max + 1; 1; ++i)
        if (pri(i))
        {
            b = i;
            break;
        }
    if((abs(b - max) < abs(a - max)))
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    return 0;
}
