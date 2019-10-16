//
//https://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right/0
// Created by Rishi on 14-Oct-19.
//



#include <bits/stdc++.h>

using namespace std;

// Assuming the dimensions m and n are non-negative integers
int numWays(int m, int n){

    int ways[m][n];

    // Number of ways to reach bottom right corner from last column of grid is 1
    for(int i = 0; i <= m-1 ; i++)
    {
        ways[i][n-1] = 1;
    }

    // Number of ways to reach bottom right from corner last row of grid is 1 too
    for(int j = 0; j <= n-1 ; j++){
        ways[m-1][j] = 1;
    }

    for(int i = m-2; i >= 0; i--){
        for(int j = n-2; j>=0; j--){
            ways[i][j] = ways[i][j+1] + ways[i+1][j];
        }
    }

    return ways[0][0];
}

int main(){

    printf("Number of unique ways to reach your home from a 4X3 grid is: %d. \n", numWays(4,3) );
    printf("Number of unique ways to reach your home from a 7X10 grid is: %d. \n", numWays(7,10) );

    return 0;
}

/*
 OPTIMISED

 #include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int numways(int m, int n)
{

    int ways[m][n];
    for(int i = 0; i <= m-1 ; i++)
    {
        ways[i][n-1] = 1;
    }
    for(int j = 0; j <= n-1 ; j++)
    {
        ways[m-1][j] = 1;
    }

    for(int i = m-2; i >= 0; i--)
    {
        for(int j = n-2; j>=0; j--)
        {
            ways[i][j]=(ways[i+1][j]%mod+ways[i][j+1]%mod)%mod;
        }
    }

    return ways[0][0];
}

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<numways(a,b)<<endl;
        }
        return 0;
}
 */
