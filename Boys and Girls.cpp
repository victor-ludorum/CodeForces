#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;   cin>>n>>m;
	char s[200];
	int k=1,l=0;
	while(m!=0&&n!=0)
	{
	   	if(k&1)
	   	{
	   		s[l++] = 'B';
	   		n--;
		}
	   	else
	   	{
	   		s[l++] = 'G';
	   		m--;
		}
	   	k++;
	}
	if(m==0&&n!=0)
	{
		while(n!=0)
		{
			s[l++] = 'B';
			n--;
		}
	}
	else if(n==0&&m!=0)
	{
		while(m!=0)
		{
			s[l++] = 'G';
			m--;
		}
	}
	s[l] = '\0';
	cout<<s<<endl;
}
