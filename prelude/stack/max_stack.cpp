//
// Created by Rishi on 26-Sep-19.
//
#include <bits/stdc++.h>
using namespace std;
stack<int>push(int arr[],int n)
{
    stack<int> s;
    int min=arr[0];
    s.push(arr[0]);
    s.push(min);
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
        s.push(arr[i]);
        s.push(min);
    }
    return s;
}

void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        s.pop();
    }

}

int main()
{
    stack<int> input;
    input.push(10);
    input.push(15);
    input.push(20);
    input.push(4);
    input.push(11);
    stack<int> tmpStack = push()
}