#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;    cin>>n>>m;
	int a[m+1],b[m+1];
	for(int i=0;i<m;++i)  cin>>a[i]>>b[i];
	int t = max(a[0] + b[0] - 1, b[m - 1] + (n - a[m - 1]));
	for(int i=1;i<m;++i)
	{
		if(b[i]>b[i-1])
		{
			int h = a[i] - a[i-1];
			int d = abs(b[i]-b[i-1]);
			if(h < (b[i]-b[i-1]))
			{
				cout<<"IMPOSSIBLE"<<endl; return 0; 
			}
			t = max(t,b[i] + (h-d)/2);
		}
		else if(b[i-1]>b[i])
		{
			int h = a[i] - a[i-1];
			int d = abs(b[i]-b[i-1]);
			if(h < (b[i-1]-b[i]))
			{
				cout<<"IMPOSSIBLE"<<endl; return 0; 
			}
			t = max(t,b[i-1] + (h-d)/2);		
		}
		else
		{
			int h = abs(a[i-1] - a[i]);
			int d = abs(b[i]-b[i-1]);
			t = max(t,b[i-1] + (h-d)/2);	
		}
	}
	
	int r = *max_element(b,b+m);
	r = max(r,t);
	cout<<r<<endl;
}
