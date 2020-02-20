/**
 * Print all subsequence of an array
 */
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int no_of_combinations = (1LL << n);
    for (int counter = 0; counter < no_of_combinations; ++counter)
    {
        for (int i = 0; i < n; ++i)
        {
            if (counter & (1 << i))
            {
                cout << arr[i] << " ";
            }
            // cout << " ; ";
        }
        cout << endl;
    }
    return 0;
}