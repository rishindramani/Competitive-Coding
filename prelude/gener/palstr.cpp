#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//char c[]="a*ba*bba";
	char c[]="a*r*a";
	int t=strlen(c)-1;
	int flag=false;
	for(int i=0;i<strlen(c)/2;i++)
	{
		if(c[i]==c[t-i])
		{
			flag=true;
		}
		else if((c[i]!=c[t-i]) && (c[i]=='*'||c[t-i]=='*'))
		{
			if(c[i]=='*')
			c[i]=c[t-i];
			else
			c[t-i]=c[i];
					}
		else
		{
			flag=false;
			break;
					}			
	}
	if(flag==true)
	cout<<"Yes";
	else
	cout<<"No";
		
		return 0;
		}