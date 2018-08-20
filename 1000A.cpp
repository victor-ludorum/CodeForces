#include <bits/stdc++.h>
using  namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n;   cin>>n;
	string x[n+1],y[n+1];
	map<int,int> m,p;
	vector<string> a,b;
	map<string,int> f,z;
	for(int i=0;i<n;++i)
	{
		cin>>x[i]; 
	}
	
	for(int i=0;i<n;++i)
	{
		cin>>y[i];
	}
	for(int i=0;i<n;++i)
	{
		bool flag = false;
		for(int j=0;j<n;++j)
		{
			if(x[i]==y[j] && p[j+1]<1)
			{
				p[j+1]++; flag = true;
				break;
			}
		}
		if(!flag)
		a.push_back(x[i]);
	}
	for(int i=0;i<n;++i)
	{
		if(p[i+1]<1)
		b.push_back(y[i]);
	}
	
//	for(int i=0;i<a.size();++i)
//	cout<<a[i]<<" "<<b[i]<<endl;
	int re=0;
	
	for(int i=0;i<b.size();++i)
	{
		int mx = INT_MAX,in;
		for(int j=0;j<a.size();++j)
		{
			int h=0;
			if(b[i].length()==a[j].length() && m[j+1]<1)
			{
				string g = b[i];
				string w = a[j];
				sort(g.begin(),g.end());
				sort(w.begin(),w.end());
			for(int k=0;k<a[j].length();++k)
			{
				if(w[k]!=g[k])
				h++;
			}
			if(mx>h)
			{
				mx = h;
				in = j;
			}
		    }
		}
		m[in+1]++;
		re = re + mx;
	}
	cout<<re<<endl;
}
