#include <bits/stdc++.h>
using namespace std;
int n,m;
char a[555][555];
int visited[555][555];
int dx[4]={0,0,-1,1}; int dy[4] = {1,-1,0,0};
void dfs(int x,int y)
{
	if(visited[x][y]==0) return ;
	visited[x][y]--;
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	dfs(x+1,y);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];
			if(a[i][j]=='.')
			visited[i][j]=1;
		}
	}
	
	int b,c,d,e ; cin>>b>>c>>d>>e;
	visited[b][c]=1;
		visited[d][e]++;
	dfs(b,c);
	
	if(visited[d][e]==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
