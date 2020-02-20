//
// Created by Rishi on 29-Sep-19.
//

// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

void AlternateRearrange(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);

    vector<int> v1; // to insert even values
    vector<int> v2; // to insert odd values

    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            v1.push_back(arr[i]);
        else
            v2.push_back(arr[i]);

    int index = 0, i = 0, j = 0;

    bool flag = false;

    // Set flag to true if first element is even
    if (arr[0] % 2 == 0)
        flag = true;

    // Start rearranging array
    while (index < n) {

        // If first element is even
        if (flag == true) {
            arr[index++] = v1[i++];
            flag = !flag;
        }

            // Else, first element is Odd
        else {
            arr[index++] = v2[j++];
            flag = !flag;
        }
    }

    // Print the rearranged array
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver code
int main()
{
    int arr[] = { 9, 8, 13, 2, 19, 14 };
    int n = sizeof(arr) / sizeof(int);
    AlternateRearrange(arr, n);
    return 0;
}