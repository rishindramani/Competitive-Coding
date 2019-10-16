//
// Created by Rishi on 25-Sep-19.
//
#include<bits/stdc++.h>
using namespace std;
 void nextgr(int arr[],int n)
 {
     stack<int> s;
     s.push(arr[0]);

     for (int i = 1; i < n; i++)
     {
         if (s.empty())
         {
             s.push(arr[i]);
             continue;
         }
         while (!s.empty() && s.top() < arr[i])
         {
             cout << s.top() << "  " << arr[i] << endl;
             s.pop();
         }

         s.push(arr[i]);
     }
     while (!s.empty())
     {
         cout << s.top() << "  " << "-1" << endl;
         s.pop();

     }
 }

int main()
{
    int arr[] = {11, 13, 13, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextgr(arr, n);
    return 0;
}