#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE  100000+7
typedef pair<int, int> p;

p arr[MAX_SIZE];

bool greater(p a, p b)
{
    return a.second < b.second;
}

int maxim(int n)
{
    sort(arr, arr + n, greater);

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
        int a, b;
        cin >> a >> b;
        arr[i] = {a, b};
    }
    cout << maxim(n) << endl;
    return 0;
}