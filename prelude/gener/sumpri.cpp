#include<bits/stdc++.h>
using namespace std;

/*   more optimised

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

*/
bool prime(int n)
{
    if(n==1||n==0)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t,l,sum=0;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>l>>s;
        for(int i=0;i<l;i++)
        {
            sum=sum+(int)s.at(i);
        }
        if(prime(sum))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
//
// Created by Rishi on 09-Sep-19.
//

