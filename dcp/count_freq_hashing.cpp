//
// Created by Rishi on 22-Oct-19.
//freq of characters in string____hashing
//

#include <bits/stdc++.h>
using namespace std;
int hashFunc(char c)
{
    return (c - 'a');
}

void countfre(string s)
{
    int Frequency[26];
    memset(Frequency, 0, sizeof(Frequency));//initialise to zero; not a problem in java
    //global definition automatically creates instances initialisers to zero

    for (int i = 0; i < s.length(); ++i)
    {
        int index = hashFunc(s[i]);
        Frequency[index]++;
    }
    for (int i = 0; i < s.length(); ++i) {
        if (Frequency[(s[i] - 'a')] > 0) {
            cout << s[i] << "   " << Frequency[(s[i] - 'a')] << endl;
            Frequency[(s[i] - 'a')] = 0;
        }
    }
}
int main()
{
    string s = "dabdacdbb";
    countfre(s);

    return 0;
}