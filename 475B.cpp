#include <bits/stdc++.h>
using namespace std;
char s[50],a[50];
bool v[50][50];
int n,m;

void traverse(int r, int c)
{
	if(r<0 || r>=n || c<0 || c>=m || v[r][c]) return ;
	v[r][c] = true;
	if(s[r]=='<') traverse(r,c-1);
	else  traverse(r,c+1);
	if(a[c]=='^') traverse(r-1,c);
	else traverse(r+1,c);
}
bool check(int i,int j)
{
	for(int x=0;x<n;++x)
	{
		for(int y=0;y<m;++y)
		{
			v[x][y] = false;
		}
	}
	traverse(i,j);
	for(int x=0;x<n;++x)
	{
		for(int y=0;y<m;++y)
		{
			if(!v[x][y]) return false;
		}
	}
	
	   return true;
}
int main()
{
	 cin>>n>>m;
	cin>>s>>a;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			if(!check(i,j))
			{
			cout<<"NO"<<endl;return 0;}
		}
	}
	cout<<"YES"<<endl;
}
