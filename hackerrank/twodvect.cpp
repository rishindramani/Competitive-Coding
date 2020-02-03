//
// Created by rishi on 1/19/2020.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int m = 5;

    // Create a vector containing n
    //vectors of size m.
    vector<vector<int> > vec( n , vector<int> (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cin>>vec[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< vec[i][j]<< " ";
        }
        cout<< "\n";
    }

    return 0;
}
