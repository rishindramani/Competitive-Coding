//
// Created by Rishi on 22-Oct-19.
/*
Given an array A of N positive integers and another number X.
Determine whether or not there exist two elements in A whose sum is exactly X.
 */

#include <bits/stdc++.h>
using namespace std;
bool TwoNumSum (int arr[],int size,int k)
{
    sort(arr,arr + size);
    int beg = 0,end = size - 1 ;
    while(beg < end)
    {
        if(arr[beg] + arr[end] == k)
            return true;
        else if (arr[beg] + arr[end] > k)
            end--;
        else
            beg++;
    }
    return false;
}

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {

        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(TwoNumSum(arr,n,x))
            cout << "Yes"<<endl;
        else
            cout << "No"<<endl;
    }
    return 0;
}

