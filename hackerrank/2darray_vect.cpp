//
// Created by rishi on 1/19/2020.
//
#include <bits/stdc++.h>
using namespace std;
int hour1(vector<vector<int> > arr)
{

    int max=INT_MIN;
    for(int i=0;i<4;i++)

    {
        for(int j=0;j<4;j++)
        {
            int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>max) max=sum;
        }
    }
    return max;
}

int main()
{
    //vector<vector<int>> arr(6);
    vector<vector<int> > vec( 6 , vector<int> (6));
    //for (int i = 0; i < 6; i++) {
    //  arr[i].resize(6);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++) {
            cin >> vec[i][j];
        }
    }
    cout<<hour1(vec);

    return 0;
}