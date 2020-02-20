//
// Created by rishi on 12/16/2019.
//
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll  add(ll A, ll B)
{
    ll cnt=0;
    while(B>0)
    {
        ll U = A ^B;
        ll V = A & B;
        A = U;
        B = V * 2;
        cnt=cnt+1;
    }
    return cnt;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;

    ll len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

int main()
{
        ll t,a1=0,b1=0;
        string a,b;
        cin>>t;
        while(t--)
    {
      cin>>a>>b;
       //a1= std::stoull(a, 0, 2);
      //a1 = atoi(a, 0, 2);
      //  b1= std::stoull(b, 0, 2);
     // b1=atoi(b, 0, 2);
        a1=binaryToDecimal(a);
        b1=binaryToDecimal(b);
      cout<<add(a1,b1)<<endl;
    }
        return 0;
}
