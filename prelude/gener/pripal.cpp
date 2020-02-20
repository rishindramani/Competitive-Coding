#include <bits/stdc++.h>
using namespace std;
bool prime[10000000];
void sieve()
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=10000000; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=10000000; i += p)
                prime[i] = false;
        }
    }
}

bool palin(string str)
{
    int l = 0;
    int h = str.size() - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        long long n;
        cin >> n;
        long long i = n;
        if(n==1)
        {
            cout<<n+1<<endl;
            continue;
        }

        while(1)
        {
            if(prime[i] && palin(to_string(i)))
                break;
            i++;
        }
        cout << i << endl;
    }
    return 0;
}