#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;  cin>>n>>k;
	vector<int> a;
	vector< pair<int,int> > p;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;  m[x] = i; a.push_back(x);
	}
	int h = INT_MIN;
	int l = INT_MAX;
	int f,g;
	for(int i=0;i<n;++i)
	{
		if(a[i]>h)
		h = a[i], f = i;
		
		if(a[i]<l)
		 l = a[i] , g =i;
	}
	int d = h-l;
//	cout<<d<<endl;
	int prev = d;
	int s =0;
	if(d==0 || d==1)
	{
		cout<<d<<" "<<"0"<<endl;
	}
	else
	{
		bool flag = true;
		while(s<k)
		{
			s++; a[f] = a[f] -1;  a[g] = a[g] +1;
			p.push_back(make_pair(f+1,g+1));
            h = INT_MIN;
	        l = INT_MAX;		
        	for(int i=0;i<n;++i)
	{
		if(a[i]>=h)
		h = a[i], f=i;
		
		if(a[i]<=l)
		 l = a[i],g = i;
	}
	        d = h-l;
	        if(f==g)
	        break;
		}
		  cout<<d<<" "<<s<<endl;
		  for(int i=0;i<s;++i)
		  cout<<p[i].first<<" "<<p[i].second<<endl;
	}
}
