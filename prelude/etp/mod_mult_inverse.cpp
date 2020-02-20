//
// Created by Rishi on 16-Oct-19.
//
/ C++ program to find modular inverse of a under modulo m
#include<iostream>
using namespace std;

// A naive method to find modulor multiplicative inverse of
// 'a' under modulo 'm'
int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
        if ((a*x) % m == 1)
            return x;
}

// Driver Program
int main()
{
    int a = 3, m = 11;
    cout << modInverse(a, m);
    return 0;
}

/*
/ Iterative C++ program to find modular
// inverse using extended Euclid algorithm
#include <stdio.h>

// Returns modulo inverse of a with respect
// to m using extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e.,
// gcd(a, m) = 1
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        int q = a / m;
        int t = m;

        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
       x += m0;

    return x;
}

// Driver program to test above function
int main()
{
    int a = 3, m = 11;

    printf("Modular multiplicative inverse is %d\n",
          modInverse(a, m));
    return 0;
}





 */