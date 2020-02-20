#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                c1++;
            }
            else if(arr[i]==2)
            {
                c2++;
            }
        }
        cout<<((c1*(c1-1))/2)+((c2*(c2-1))/2)<<endl;
    }
}