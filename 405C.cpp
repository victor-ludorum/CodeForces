#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n;    cin>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		cin>>a[i][j];
	}
	
			long s=0;
			for(int i=1;i<=n;++i)
			s = s + a[i][i];
			s=s%2;
	int q;   cin>>q;   string r;
	while(q!=0)
	{
		int x;  cin>>x;
		if(x==2 || x==1)
		{
			if(x==1)
			{
				int y;   cin>>y;
				a[y][y] = 1-a[y][y];
				if(a[y][y]==1)
				s = (s+1)%2;
				else
				s = (s-1)%2;
			}
			else
			{
				
				int y;   cin>>y;
				a[y][y] = 1-a[y][y];
				if(a[y][y]==1)
				s = (s+1)%2;
				else
				s = (s-1)%2;				
			}
		}
		else
		{
			stringstream ss;
            ss << s;
            string str = ss.str();
			r+=str;
		}
		q = q-1;
	}
	cout<<r<<endl;
}
