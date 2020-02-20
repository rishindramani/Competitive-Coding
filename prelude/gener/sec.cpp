//
// Created by rishi on 2/18/2020.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define enigma ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main()
{
    enigma;
    int n,q;
    bool flag = false;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cin >> q;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == q)
        {
            cout << (int)log2(i + 1) << endl;
            flag = true;
            break;
        }
    }

    if (flag==false)
    {
        cout << -1 << endl;
    }

    return 0;
}

