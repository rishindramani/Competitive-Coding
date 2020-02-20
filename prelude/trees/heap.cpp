//
// Created by rishi on 1/14/2020.
//
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2; // right = 2*i + 2

    void buildHeap(int arr[], int n)
    {
        int startIdx = (n / 2) - 1;

        // Perform reverse level order traversal
        // from last non-leaf node and heapify
        // each node
        for (int i = startIdx; i >= 0; i--)
        {
            heapify(arr, n, i);
        }
    }



    int main()
    {
        int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
        int n = sizeof(arr) / sizeof(arr[0]);
        buildHeap(arr, n);
        printHeap(arr, n);
        return 0;
    }



