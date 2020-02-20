//
// Created by Rishi on 01-Oct-19.
//

#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n==1||n==0)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,res;
    cin>>n;
  int x=n;
    int arr[n];

 /*   for (int i = 2; i <= n; i++)
    {
        arr[i]=0;
    }*/
    //arr[0]=0;
    //arr[1]=0;
    for (int i =5; i<=n; i++)
    {
        res = 0;
       if (prime(i))
        {


           while (x>1)
          {
               int t = floor(x / i);
              res = res + t;
                x = t;
            }
       }
        arr[i-1] = res;
    }

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}