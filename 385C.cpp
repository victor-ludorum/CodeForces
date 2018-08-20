#include <bits/stdc++.h>
using namespace std;
bool p[10000007]={0};
long long m[10000007],c[10000007];
int main()
{
	long long n;   cin>>n;
	long long mx = INT_MIN;
	
	for(long long i=0;i<n;++i)
	{
		long long x;  cin>>x;  m[x]++;
		if(x>mx)
		mx = x;
	}
	
	for(long long i=2;i<=mx;++i)
	{
		if(!p[i])
		{
	//	cout<<"hi"<<endl;
		for(long long j=i;j<=mx;j+=i)
		{
		    p[j] = true; 
			if(m[j]>0)
			c[i]+=m[j];	
		//		cout<<c[i]<<endl;
		}
		 p[i] = false;
	    }  
	}
	int d=0;
	for(long long i=2;i<=mx;++i)
	{
		if(!p[i])
		{
			c[i] = c[i] + d;
			d = c[i]; 
		}
		else
		 c[i] = d;
	}
	
/*	for(int i=2;i<=mx;++i)
	cout<<c[i]<<" ";
	cout<<endl;  */
	
	int q;   cin>>q;
	while(q--)
	{
		int x,y;    cin>>x>>y;
		if(x<=mx &&y<=mx)
		cout<<c[y] - c[x-1]<<endl;
		else if(x<=mx && y>mx)
		cout<<c[mx] - c[x-1]<<endl;
		else
		cout<<"0"<<endl;
	}
}
