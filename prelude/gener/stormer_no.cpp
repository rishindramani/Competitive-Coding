//
// Created by Raajdep on 23-Oct-19.
//
#include<bits/stdc++.h>
using namespace std;
#define int long long;
bool isstormer(int n)
{
    for(int i=0)
}

long long maxPrimeFactors(long long n)
{
   long long maxPrime = -1;
   while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
    if (n > 2)
        maxPrime = n;
    return maxPrime;
}
int main()
{
    int n;
    cin>>n;

}