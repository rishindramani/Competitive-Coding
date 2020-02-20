//
// Created by rishi on 12/21/2019.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k,i,j,count=0,flag;
    cin >> t;
    while (t--)
    {
        count = 0;
        flag = 0;
        cin >> n >> k;
        int a[n];
        for ( i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            for (j = 0; j < n; j++)
            {
                if (a[j] < k)
                {
                    flag = j+1;
                    break;
                }
                else
                    {
                    a[j + 1] = a[j + 1] + a[j] - k;
                    count++;
                }
            }
            if (count == n)
            {
                cout << "YES" << endl;
            }
            else
                {
                cout << "NO " << flag << endl;
            }
        }
    return 0;
}