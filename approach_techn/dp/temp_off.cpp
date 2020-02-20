//
// Created by rishi on 11/25/2019.
//

#include<bits/stdc++.h>
using namespace std;

int countMin(int n, int a[]) {
    int le[n], ri[n];

    le[0] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) {
            le[i] = le[i-1]+1;
        } else {
            le[i] = 1;
        }
    }

    ri[n-1] = 1;
    for (int i = n-2; i > -1; i--) {
        if (a[i] > a[i+1]) {
            ri[i] = ri[i+1]+1;
        } else {
            ri[i] = 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += std::max(le[i], ri[i]);
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << countMin(n,a) << '\n';
    }
    return 0;
}