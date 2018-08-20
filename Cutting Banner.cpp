#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	char a[11];
	int l=0;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='C'&& l==0)
		{
			a[l++] = 'C';
		}
		else if(s[i]=='O' && l==1)
		{
			a[l++] = 'O';
		}
		else if(s[i]=='D' && l==2)
		{
			a[l++] = 'D';
		}
		else if(s[i]=='E' && l==3)
		{
			a[l++] = 'E';
		}
		else if(s[i]=='F' && l==4)
		{
			a[l++] = 'F';
		}
		else if(s[i]=='O' && l==5)
		{
			a[l++] = 'O';
		}
		else if(s[i]=='R' && l==6)
		{
			a[l++] = 'R';
		}
		else if(s[i]=='C' && l==7)
		{
			a[l++] = 'C';
		}
		else if(s[i]=='E' && l==8)
		{
			a[l++] = 'E';
		}
		else if(s[i]=='S' && l==9)
		{
			a[l++] = 'S';
		}
		
	}
	a[l] = '\0';
	cout<<a<<endl;
	string d = "CODEFORCES"; 
	if(a == d)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
