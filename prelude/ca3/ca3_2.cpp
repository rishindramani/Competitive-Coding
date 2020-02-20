//
// Created by Rishi on 06-Nov-19.
//
/*#include <bits/stdc++.h>
using namespace std;
struct lect
{
    int start, finish;
};

bool cmp( lect s1, lect s2)
{
    return (s1.finish < s2.finish);
}
int maxim(lect arr[], int n)
{
    int cnt=0;
     sort(arr, arr+n,cmp);
     int i = 0;
     for (int j = 1; j < n; j++)
    {
          if (arr[j].start >= arr[i].finish)
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
    cin>>n;
    lect arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxim(arr,n);
    return 0;
}
 */
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

pii a[MAX_SIZE];

bool comp(pii a, pii b)
{
    return a.second < b.second;
}

int k(int n)
{
    sort(a, a + n, comp);

    int count = 1;
    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (a[j].first >= a[i].second)
        {
            count++;
            i = j;
        }
    }
    return count;
}

int main() {

    int n;
    cin >> n;
    for(int i=0; i < n; i++) {
        int s, f;
        cin >> s >> f;
        a[i] = {s, f};
    };
    cout << k(n) << endl;
    return 0;
};