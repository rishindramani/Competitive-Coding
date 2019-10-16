//
// Created by Rishi on 09-Oct-19.
// do using stack ?
//implement stack using queue and vice versa
#include <bits/stdc++.h>
using namespace std;
/*bool check(string& s)
{
    stack<char> d;
    for(int i=0;i<s.length();i++)
    {

*/
int main()
        {
    string text;
    cin>>text;
    int c=0;
    for(int i=0;i<text.length();i++)
    {
        if(text.at(i)=='(')
        {
            c++;
        }
        else if(text.at(i)==')')
        {
            c--;
        }
        else
        {
        }
    }
    if(c==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"No";
    }

return 0;
    }

