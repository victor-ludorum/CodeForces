#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;  cin>>n;
	vector<long long> pa,a,b,c,r,d;
	for(long i=0;i<n;++i)
	{
		long long x; cin>>x; pa.push_back(x);
	}
	for(long i=0;i<n;++i)
	{
		long long x; cin>>x;
		if(x==1)
		a.push_back(pa[i]);
		else if(x==2)
		b.push_back(pa[i]);
		else if(x==3)
		c.push_back(pa[i]);
	}
	for(long i=0;i<n;++i)
	{
		long long x; cin>>x;
		if(x==1)
		a.push_back(pa[i]);
		else if(x==2)
		b.push_back(pa[i]);
		else if(x==3)
		c.push_back(pa[i]);
	}
	
	long m;  cin>>m;
	for(long i=0;i<m;++i)
	{
		long long x; cin>>x;  d.push_back(x);
	}
	sort(a.begin(),a.end());
    sort(b.begin(),b.end());	
    sort(c.begin(),c.end());
	map<long long ,int> ma;
	long k=0,l=0,p=0;
	
	for(long i=0;i<m;++i)
	{
		
		if(d[i]==1)
		{
			bool fl = true;
			while(k<a.size())
		    {
		        if(ma[a[k]]<1)	
			   {
			     r.push_back(a[k]);  fl = false;
			     ma[a[k++]]++;   break;
		       }
		         k++;
		    }
		   if(fl)
		      r.push_back(-1);
		}
		else if(d[i]==2)
		{
			bool fl = true;
			while(l<b.size())
		    {
		    	if(ma[b[l]]<1)
		    	{			
			       r.push_back(b[l]);  fl = false;
			       ma[b[l++]]++;  break;
		        }
		           l++;
		    }
		   if(fl)
		      r.push_back(-1);		   
		}
		else
		{
				bool fl = true;
			while(p<c.size())
		   {
		   	    if(ma[c[p]]<1)
		   	   {   
			    r.push_back(c[p]);  fl= false;
			    ma[c[p++]]++;    break;
		       }
		        p++;
		   }
		   if(fl)
		      r.push_back(-1);		   
		}

	}
	for(long i=0;i<m;++i)
	{
		cout<<r[i]<<" ";
	}
}
