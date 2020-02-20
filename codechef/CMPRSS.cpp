//
// Created by rishi on 12/24/2019.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin>>t;
    vector<int> v;
    while (t--)
    {
        cin >> n;
        while (n--) {
            cin >> x;
            v.push_back(x);
        }
        cout << v[0];
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i] - v[i - 1] == 1)
                continue;
            else
                cout << "..." << v[i - 1];
        }
        v.clear();
    }
    return 0;
}

