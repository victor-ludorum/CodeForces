#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	vector<int> a,b;
	map<int,int> m;
	bool flag = false;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;
		m[x]++;
		if(m[x]==1)
		a.push_back(x);
		else if(m[x]==2)
		{  flag = true;
		   b.push_back(x);
	    }
	}
	sort(a.begin(),a.end());      sort(b.begin(),b.end()); reverse(b.begin(),b.end());
	if(!flag)
	{
		cout<<a.size()<<endl;
		reverse(a.begin(),a.end());
		for(int i=0;i<a.size();++i)
		cout<<a[i]<<" ";
	}
	else
	{
	/*	for(int j=0;j<b.size();++j)
		cout<<b[j]<<" ";   */
		vector<int> v;
		int i,c=0;
		for(i=0;i<a.size();++i)
	    {
	    	v.push_back(a[i]);  c++;
		}
		i=i-1;
		int k=0;
			if(a[i]==b[k])
			k=k+1;
		for(int l=k;l<b.size();++l)
		{
				v.push_back(b[l]);  c++;
		}
		cout<<c<<endl;
		for( i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	}
}
