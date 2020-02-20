//
// Created by Rishi on 21-Oct-19.
//
#include <bits/stdc++.h>
using namespace std;

void display(queue <int> q)
{
    queue<int> g=q;
    while(!q.empty())
    {
        cout<<"\t"<<q.front()<<endl;
        q.pop();
    }
}

int main()
{
    queue<int> tq;
    tq.push(20);
    tq.push(30);
    tq.push(10);
    display(tq);
    return 0;
}
