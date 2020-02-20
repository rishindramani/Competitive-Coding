//
// Created by Rishi on 06-Nov-19.
//
// C++ program to print
// Stormer numbers
//A Stormer Number is a positive integer ‘i’ such that the greatest prime factor of the term i*i + 1 is greater than or equal to 2*i.
// Function to find
// largest prime factor

#include <iostream>
using namespace std;

int maxPrimeFactors(int n)
{
    // Initialize the maximum
    // prime factor variable
    // with the lowest one
    int maxPrime = -1;

    // Print the number of
    // 2's that divide n
    while(n % 2 == 0)
    {
        maxPrime = 2;
        n /= 2;
    }

    // n must be odd at this
    // point, thus skip the
    // even numbers and iterate
    // only for odd integers
    for(int i = 3; i < (int)(n * 1 /
                             2 + 1); i += 2)
        while(n % i == 0)
        {
            maxPrime = i;
            n /= i;
        }

    // This condition is to handle
    // the case when n is a prime
    // number greater than 2
    if (n > 2)
        maxPrime = n;

    return (int)(maxPrime);
}

// Function to generate
// Stormer Numbers
int stormer(int n)
{
    int i = 1;

    // Stores the number of
    // Stormer numbers found
    int count = 0;
    while(count < n)
    {
        int t = i * i + 1;
        if (maxPrimeFactors(t) >= 2 * i)
        {
            cout << i ;
            cout <<" ";
            count += 1;
        }
        i += 1;
    }
    return i;
}

// Driver Code
int main() {

    int n = 10;
    stormer(n);

}
