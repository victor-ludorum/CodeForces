#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;  cin>>n>>m;
	string s[n];
	for(int i=0;i<n;++i)
	  cin>>s[i];
	int r=0;
	int a=0,b=0,c=0;
	for(int i=0;i<n;++i)
	{
		if(s[i][0]=='*'||s[i][0]=='#'||s[i][0]=='&') a++;
		if(s[i][0]>='a' && s[i][0]<='z') b++;
		if(s[i][0]>=0 && s[i][0]<=9)   c++;
	}
	if(a>=1 && b>=1 && c>=1)
	{
		cout<<r<<endl; return 0;
	}
	int d[10];
	memset(d,0,sizeof(d));
	for(int i=0;i<s[1].length();++i)
	{
		if(s[1][i]=='*'||s[1][i]=='#'||s[1][i]=='&') d[1] = i;
		if(s[1][i]>='a' && s[1][i]<='z') d[2] = i;
		if(s[1][i]>=0 && s[1][i]<=9)  d[3] = i;
	}
	
	for(int i=s[1].length()-1;i>=1;--i)
	{
		if(s[1][i]=='*'||s[1][i]=='#'||s[1][i]=='&') d[1] = min(d[1],s[1].length() - i);
		if(s[1][i]>='a' && s[1][i]<='z') d[2] =  min(d[2],s[1].length() - i);
		if(s[1][i]>=0 && s[1][i]<=9)  d[3] =  min(d[3],s[1].length() - i);
	}
	
	for(int i=0;i<s[2].length();++i)
	{
		if(s[2][i]=='*'||s[2][i]=='#'||s[2][i]=='&') d[4] = i;
		if(s[2][i]>='a' && s[2][i]<='z') d[5] = i;
		if(s[2][i]>=0 && s[2][i]<=9)  d[6] = i;
	}
	
	for(int i=s[2].length()-1;i>=1;--i)
	{
		if(s[2][i]=='*'||s[2][i]=='#'||s[2][i]=='&') d[4] = min(d[4],s[2].length() - i);
		if(s[2][i]>='a' && s[2][i]<='z') d[5] =  min(d[5],s[2].length() - i);
		if(s[2][i]>=0 && s[2][i]<=9)  d[6] =  min(d[6],s[2].length() - i);
	}
	
	for(int i=0;i<s[3].length();++i)
	{
		if(s[3][i]=='*'||s[3][i]=='#'||s[3][i]=='&') d[4] = i;
		if(s[3][i]>='a' && s[3][i]<='z') d[5] = i;
		if(s[3][i]>=0 && s[3][i]<=9)  d[6] = i;
	}
	
	for(int i=s[3].length()-1;i>=1;--i)
	{
		if(s[3][i]=='*'||s[3][i]=='#'||s[1][i]=='&') d[4] = min(d[4],s[2].length() - i);
		if(s[3][i]>='a' && s[3][i]<='z') d[5] =  min(d[5],s[2].length() - i);
		if(s[3][i]>=0 && s[3][i]<=9)  d[6] =  min(d[6],s[2].length() - i);
	}
	
}
