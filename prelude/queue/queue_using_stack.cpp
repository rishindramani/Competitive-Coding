//
// Created by Rishi on 09-Oct-19.
//  incomplete?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4};
    stack<int > q;
    for (int i = 0; i <arr.size() ; ++i)
    {
        
       q.push((i));
    }
    stack<int> sec;
    while(!q.empty())
    {
        sec.push(q.top());
        q.pop();
    }
     int x=sec.pop();
     sec.pop();
    cout<<"top"<<x<<endl;
    cout<<"queue"<<endl;
    while(!sec.empty())
    {
        cout<<sec.top();
        q.push(sec.top());
    }
}

