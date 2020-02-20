//
// Created by Rishi on 06-Nov-19.
// A frugal number is a number whose number of digits is strictly greater than the number of digits in its prime
// factorization (including exponents). If the exponent is 1 for a certain prime,
// involved in the prime factorization, then that exponent does not contribute to
// the number of digits in the prime factorization.
//

// Program to check for Frugal number
#include <bits/stdc++.h>
using namespace std;

// Finding primes upto entered number
vector<long long int> primes(long long int n)
{
    bool prime[n + 1];

    // Finding primes by Seive of Eratosthenes method
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= n; i++) {

        // If prime[i] is not changed, then it is prime
        if (prime[i] == true) {

            // Update all multiples of p
            for (int j = i * 2; j <= n; j += i)
                prime[j] = false;
        }
    }

    // Forming array of the prime numbers found
    vector<long long int> arr;
    for (int i = 2; i < n; i++)
        if (prime[i])
            arr.push_back(i);

    return arr;
}

// Returns number of digits in n
int countDigits(long long int n)
{
    long long int temp = n;
    int c = 0;
    while (temp != 0) {
        temp = temp / 10;
        c++;
    }
    return c;
}

// Checking whether a number is Frugal or not
bool frugal(long long int n)
{
    vector<long long int> r = primes(n);
    long long int t = n;
    // Finding number of digits in prime
    // factorization of the number
    long long int s = 0;
    for (int i = 0; i < r.size(); i++) {
        if (t % r[i] == 0) {

            // Exponent for current factor
            long long int k = 0;

            // Counting number of times this prime
            // factor divides (Finding exponent)
            while (t % r[i] == 0) {
                t = t / r[i];
                k++;
            }

            // Finding number of digits in the exponent
            // Avoiding exponents of value 1
            if (k == 1)
                s = s + countDigits(r[i]);
            else if (k != 1)
                s = s + countDigits(r[i]) + countDigits(k);
        }
    }

    // Checking condition for frugal number
    return (countDigits(n) > s && s != 0);
}

// Driver Method to check for frugal number
int main()
{
    long long int n = 343;
    if (frugal(n))
        cout << "A Frugal number\n";
    else
        cout << "Not a frugal number\n";
    return 0;
}