#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;   cin>>n>>k;
	int l = n;
	vector<int> a,b;
	map<int,int> m;
	map<int,int> m1;
	vector< pair<int,int> > p;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;  a.push_back(x);
	}
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;  b.push_back(x);
	}	
	for(int i=0;i<n;++i)
	{
		  p.push_back(make_pair(b[i]-a[i],i));
	}
	sort(p.begin(),p.end());
	reverse(p.begin(),p.end());
	int s=0;
	int i=0;
	while(n!=0)
	{
		if(p[i].first>=0)
		{
			s = s + a[p[i].second];
            int w = p[i].second;
			k--; n--;i++;  m1[w]++;
		}
		else
		{
		    for(int j=i;j<k+i;++j)	
		    {
		    	s = s + a[p[j].second]; n--;  m1[p[j].second]++;
			}
			break;
		}
	}
	if(n!=0)
	{
		n=l;
	for(i=0;i<n;++i)
	{
		if(m1[i]<1)
		s = s + b[i];
	}
	}
	cout<<s<<endl;
}
