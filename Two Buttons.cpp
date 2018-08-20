#include<bits/stdc++.h>
using namespace std;
int dis[10005];
bool vis[10005];
int main()
{
	int n,m;   cin>>n>>m;
	queue<int> q;
	memset(vis,true,sizeof(vis));
	q.push(n);
	dis[n]=0;
	bool flag = true;
	if(2*n <= m || m &1 )
	{
	
	while(!q.empty() && flag)
	{
		int d = q.front();
		q.pop();	
		vis[d] = false;	
	//	cout<<d<<endl;
		if(d-1 == m)
		{
	//		cout<<"Hello 1"<<endl;
			vis[d-1] = false;
			dis[d-1] = dis[d]+1;  flag = false;
		}
		else if(d-1>0 && vis[d-1])
		{
	//		cout<<"Hello "<<endl;
		    vis[d-1] = false;
			q.push(d-1);
			dis[d-1] = dis[d]+1;
		}
	//	cout<<"Hello 5"<<endl;
		if(2*d==m)
		{
	//		cout<<"Hello 2"<<" "<<d-1<<endl;
			vis[2*d] = false;
			dis[2*d] = dis[d]+1;  flag = false;
		}
			
		else if(2*d!=m && vis[2*d])
		{
	//		cout<<"2*d - "<<2*d<<endl;
	//		cout<<"hello 4"<<endl;
		     vis[2*d] = false;
			 q.push(2*d);
			dis[2*d] = dis[d] + 1;
		}
		
	}
    }
    
    else
    {
    	
	while(!q.empty()&&flag)
	{
		int d = q.front();
		q.pop();	
		vis[d] = false;	
	//	cout<<d<<endl;
		if(d-1==m)
		{
	//		cout<<"Hello 1"<<endl;
			vis[d-1] = false;
			dis[d-1] = dis[d]+1;  flag = false;
		}
		else if(d-1>0 && vis[d-1])
		{
	//		cout<<"Hello "<<endl;
		    vis[d-1] = false;
			q.push(d-1);
			dis[d-1] = dis[d]+1;
		}
		if(2*d==m)
		{
			flag = false;
			vis[2*d] = false;
			dis[2*d] = dis[d] + 1;
		}
    }
    
	}
	cout<<dis[m]<<endl;
}
