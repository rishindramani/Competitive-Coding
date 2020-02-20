//
// Created by rishi on 11/25/2019.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    //code

    int t,i,j,k,n,c,ans,flag;

    cin>>t;

    while(t--){

        cin>>n;

        int a[n];

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        int b[n];

        for(i=0;i<n;i++){
            b[i]=1;
        }
        ans=1;
        flag=0;
        for(i=1;i<n;i++){

            for(j=0;j<i;j++){

                if(a[i]%a[j]==0 || a[j]%a[i]==0){
                    flag=1;
                    b[i]=max(b[i],b[j]+1);
                }
            }
            ans=max(ans,b[i]);
        }

        for(i=0;i<n;i++){
            //    cout<<b[i]<<" ";

        }

        if(flag)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}