#include <bits/stdc++.h>
using namespace std;
char m[1001][1001];
int di[1001][1001];
int dx[5]={0,0,0,1,-1},dy[5] = {0,1,-1,0,0};
int main()
{
	
	int n,b;  cin>>n>>b;
	memset(di,-1,sizeof(di));
	queue< pair<int,int> > q;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=b;++j)
		{
			cin>>m[i][j];
			if(m[i][j]=='E')
			{
				q.push(make_pair(i,j));
				di[i][j] = 0;
			}
		}
	}
	int d;
	while(!q.empty())
	{
		pair<int,int> f = q.front();  q.pop();
		
		
		for(int i=1;i<=4;++i)
		{
		    int x = f.first + dx[i]; int y = f.second + dy[i];
			if(di[x][y]==-1 && x>0 && x<=n && y>0 && y<=b && m[x][y]!='T')
			{
				di[x][y] = di[f.first][f.second] + 1;
				if(m[x][y]=='S')
				  d = di[x][y];
				q.push(make_pair(x,y));
			}
		}
	}
	int r=0;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=b;++j)
		{
			if(di[i][j]!=-1 && di[i][j] <=d && m[i][j] >='0' && m[i][j] <='9')
			      r+=m[i][j]-'0';
		}
	}
	cout<<r<<endl;
}
