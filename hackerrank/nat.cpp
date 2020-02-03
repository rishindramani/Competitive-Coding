#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool prime(int x)
{
    if(x==1||x==0)
        return false;
    for(int  i= 2; i *i<=x;i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=0;
        for(int i=1;i*i<=n;i++)
        {
            if(i*i==n)
            {
                c++;
            }
            else
            {
                c=c+2;
            }
        }
        cout<<(prime(c)?"Yes":"No")<<endl;
    }
    return 0;
}