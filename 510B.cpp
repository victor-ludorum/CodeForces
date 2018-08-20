#include<bits/stdc++.h>
using namespace std;
	char a[55][55];
	bool v[55][55];
   int n,m;
void dfs(int x,int y,int w,int z)
{
	if(a[x][y]!=a[w][z])
	return;
	if(v[x][y])
	{
		cout<<"Yes"<<endl;  exit(0);
	}
	v[x][y] = true;
//	cout<<x<<" "<<y<<" "<<w<<" "<<z<<endl;
	if(x-1>0&&x-1!=w) dfs(x-1,y,x,y);
	if(y-1!=z&&y-1>0) dfs(x,y-1,x,y);
	if(y+1<m&&y+1!=z) dfs(x,y+1,x,y);
	if(x+1!=w&&x+1<n)  dfs(x+1,y,x,y);
}
int main()
{
	  cin>>n>>m;
	  
	for(int i=0;i<n;++i)
	{
	for(int j=0;j<m;++j)
		{
			cin>>a[i][j]; 
		}
	}
	
	for(int i=0;i<n;++i)
	for(int j=0;j<m;++j)
	{
		memset(v,false,sizeof(v));
		dfs(i,j,i,j);
	}
	cout<<"No"<<endl;
}
