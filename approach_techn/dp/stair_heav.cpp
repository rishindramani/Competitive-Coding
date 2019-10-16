//
// Created by Rishi on 14-Oct-19.
//

#include <bits/stdc++.h>

using namespace std;

// Assuming 'n' is not below 1
int stairwayToHeaven(int n){

    // Initializing ways array
    int ways[n+1];

    ways[0] = 1;
    ways[1] = 1;

    for(int i = 2; i <= n; i++ ){
        ways[i] = ways[i-1] + ways[i-2];
    }

    return ways[n];
}

int main(){

    printf("Number of ways to reach heaven with 5 stairs is %d.\n", stairwayToHeaven(5) );
    printf("Number of ways to reach heaven with 8 stairs is %d.\n", stairwayToHeaven(8) );
    printf("Number of ways to reach heaven with 14 stairs is %d.\n", stairwayToHeaven(14) );

    return 0;
}

/*
 OPTIMISED
  #include <bits/stdc++.h>
using namespace std;
long long int m=pow(10,9)+7;
int main()
{
   int t,n;
   cin>>t;

    int ways[100000];

    ways[0] = 1;
    ways[1] = 1;

    for(int i = 2; i<=100000; i++ )
    {
        ways[i] = (ways[i-1]%m+ways[i-2]%m)%m;
    }
   while(t--)
   {
       cin>>n;
       cout<<ways[n]<<endl;
   }
    return 0;
}
 */