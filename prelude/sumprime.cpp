#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    bool flag=true;
    if(n==1||n==0)
    {
        flag=false;
    }
    for(int i=2;(i*i)<=n;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
        else
        {
            flag=true;
        }
    }
    return flag;
}
int main()
{
    int t,s=0,num,a;
    cin>>t;
    while(t--)
    {
        cin>>num;
        while(num>9)
        {
            s=0;
            while(num!=0)
            {
                a=num%10;
                s=s+a;
                num=num/10;
            }
            num=s;
        }
        if(prime(num))
            cout<<"P"<<endl;
        else
            cout<<"NP"<<endl;
    }
    return 0;
}
