#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};//6 5 4  3  2 1
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}