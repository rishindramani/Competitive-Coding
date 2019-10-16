//
// Created by Rishi on 07-Oct-19.
//
// incomplete
#include<bits/stdc++.h>
using namespace std;
void nextgr(int arr[],int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i=n-1;i>=0;i--)
    {
        if (s.empty())&&
        {
            s.push(arr[i]);
            continue;
        }
        while (!s.empty() && s.top() < arr[i])
        {
            cout << s.top() << "  " << arr[i] << endl;
            s.pop();
        }

        s.push(arr[i]);
    }
    while (!s.empty())
    {
        cout << s.top() << "  " << "-1" << endl;
        s.pop();

    }
}

