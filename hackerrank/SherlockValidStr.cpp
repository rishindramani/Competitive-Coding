//
// Created by rishi on 1/9/2020.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,k,n;
    string s;
    int freq[26];
    memset(freq,0,sizeof(freq));
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
        j=0;k=0;
    for(i=0;i<26;i++)
    {
        if(freq[i]==0)
            continue;
        else if(freq[i]!=0&&j==0)
            j=freq[i];
        if(freq[i]!=j)
            k++;// k=1 acceptable
    }
    if(k>1)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;

}


/*
 EDITORIAL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> freq;
    string s;
    cin >> s;
    string ans = "NO";

    // cnt[i] stores frequency of character i+'a'
    int cnt[26];
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        // increasing frequency abccabc
        cnt[s[i] - 'a']++;//index freq
    }

    // for i>=0, it means we are removing character i+'a', if possible
    // case i=-1 is for checking if string is already valid

    for (int i = -1; i < 26; i++) {
        // if character i+'a' is not present in string continue
        if (i >= 0 and cnt[i] == 0)
            continue;

        // reduce frequency
        if (i >= 0)
            cnt[i]--;

        // if we insert all positive frequencies into a set, it should contain
        // only 1 element if string is now valid
        set<int> freq;

        // insert remaining positive frequencies into set
        for (int j = 0; j < 26; j++) {
            if (cnt[j])
                freq.insert(cnt[j]);
        }

        // if set size is 1, string is now valid
        if (freq.size() == 1)
            ans = "YES";

        // increase the frequency back again
        if (i >= 0)
            cnt[i]++;
    }
    cout << ans << endl;
    return 0;
}

#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={0,1,0,-1};int dy[]={1,0,-1,0}; //4 direction
#define REP(i,n) for(int i=0;i<n;i++)
#define REPU(i,a,b) for(int i=a;i<b;i++)
#define sll(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pi(n) printf("%d",n)
#define sl(n) scanf("%ld",&n)
#define pin(n) printf("%d\n",n)
#define MP make_pair
#define PB push_back
#define all(a) a.begin(),a.end()
#define F first
#define S second
#define SET(a,b) memset(a,b,sizeof (a))
typedef long long LL;
#define PII pair<int,int>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hash[26]={0};//         aabbccddeefghi
    REP(i,s.size())
        hash[s[i]-'a']++;

    int t=0,ct=0;

    REP(i,26)
    {
        if(hash[i] && t==0)
        {
            t=hash[i];
        }
        else if(hash[i] && t!=0)
        {
            if(hash[i]!=t) ct++;
        }
    }
    if(ct<2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
 */