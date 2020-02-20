//
// Created by Rishi on 22-Oct-19.
// freq of characters in string____naive
//
#include <bits/stdc++.h>
using namespace std;

void countfre(string s)
{
    for(char c = 'a';c <= 'z';++c) {
        int frequency = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == c) {
                frequency++;
            }
        }
        if (frequency > 0) {
            cout << c << "  " << frequency << endl;
        }
    }
}
int main() {
    int choice;
    string s;
    while (choice != 2) {
        cout << "1. count"<<endl;
        cout << "2. Exit"<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> s;
                countfre(s);
                break;
            case 2:
                break;
            default:
                cout << "Invalid choice";
        }
    }
    return 0;
}
