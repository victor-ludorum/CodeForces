#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,m;   cin>>n>>m;
    vector<string> a;
	vector<long> r,s;
	map< pair<long,int>,int > ma;
	for(long i=0;i<n;++i)
	{
		string d;  cin>>d;  a.push_back(a[i]);  long x,y;  cin>>x>>y; r.push_back(x);  s.push_back(y);
		ma[make_pair(x,y)]++;
	}	
	for(long i=0;i<n-1;++i)
	{
		for(long j=i+1;j<n;++j)
		{
			if(s[i]<s[j])
			{
				swap(r[i],r[j]); swap(s[i],s[j]);  swap(a[i],a[j]);
			}
		}
	}
	vector<int> g;
	for(int i=0;i<m;++i)
	{
		g.push_back(0);
	}
	long k=0;
	vector<string> re,pr;
	for(long i=0;i<n;++i)
	{
		if(ma[make_pair(r[i],s[i])]<=2)
		{			
	             if(g[r[i]]<1)
			     {
				 g[r[i]] = g[r[i]] + 1;
			     pr[r[i]] = a[i];
			     }
			     else if(g[r[i]]==2)
			     {
			     	re.push_back(pr[r[i]]) ;  re.push_back(a[i]);
			     	g[r[i]] = g[r[i]] + 1;
				 }
		}
		else
		{
			re.push_back("?");
		}
	}
	int c=1;
	for(long i=0;i<m;++i)
	{
	   if(re[i]=="?")
	   {
	   	  cout<<re[i]<<endl;
	   	   c=1;
	   }
	   else if(c==1)
	   {
	   	 cout<<re[i]<<" "; c++;
	   }
	   else if(c==2)
	   {
	   	 cout<<re[i]<<endl; c=1;
	   }
	   
	}
}
