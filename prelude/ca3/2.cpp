//
// Created by Rishi on 06-Nov-19.
//
#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE  100000+7
typedef pair<int, int> p;
p arr[MAX_SIZE];

bool comp(p s1, p s2)//compare
{
    return s1.second < s2.second;
}

int great(int n)//calc max
{
    sort(arr, arr + n, comp);

    int cnt = 1;
    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[j].first >= arr[i].second)
        {
            cnt++;
            i = j;
        }
    }
    return cnt;
}

int main()
{

    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        arr[i] = {n1, n2};
    };
    cout << great(n) << endl;
    return 0;
};
