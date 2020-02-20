//
// Created by rishi on 1/22/2020.
//
#include <bits/stdc++.h>
//#define long long int ll;
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> x(n);
    x = v;
    double s = 0.0;
    for (int i = 0; i < v.size(); i++) {
        s = s + v[i];
    }
    double avg = s / v.size();//orig
    double ns = 0.0;
    while (k>0)
    {
        make_heap(x.begin(), x.end());
        ns=0.0;
        for (int i = 0; i<n; i++)
        {
            ns = ns + x[i];
        }
     //   cout<<x.front()<<endl;
            ns = ns - x.front() + (x.front() / k);
            x[n - 1] = x.front()/3;

        k--;
    }
    cout << "orig avg" << avg << endl;
    cout<<ns<<endl;
    cout << "new avg" << (ns / n);

    return 0;
}