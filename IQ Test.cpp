#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[4][4];
	for(int i=0;i<4;++i)
	{
		for(int j=0;j<4;++j)
		{
			cin>>a[i][j];
		}
	}
	bool flag = false;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			if(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')
			{
				flag = true;  break;
			}
			if(a[i][j]=='.'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')
			{
				flag = true;  break;
			}
			if(a[i][j]=='#'&&a[i][j+1]=='.'&&a[i+1][j]=='#'&&a[i+1][j+1]=='#')
			{
				flag = true;  break;
			}
			if(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='.'&&a[i+1][j+1]=='#')
			{
				flag = true;  break;
			}
			if(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i+1][j]=='#'&&a[i+1][j+1]=='.')
			{
				flag = true;  break;
			}			
		}
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
