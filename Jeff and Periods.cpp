#include<bits/stdc++.h>
using namespace std;
int b[100005],c[100005];
int main()
{
	int n;    cin>>n;
	vector<int> a,r;
	map<int,int> m;
	map<int,int> m1;
	map<int,int> m2;
	int s =0;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x; a.push_back(x);  m[x]++;
		if(m[x]==1)
		{		b[x] = i;  }
		else if(m[x]==2)
		{
		   	c[x] = abs(b[x] - i); 	b[x] = i;
		}
		else
		{
			int k;
			k = abs(b[x] - i);
			if(c[x]!=k)
			{	m1[x]=-1; }
			b[x] = i;
		}
	
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;++i)
	{
		if(m1[a[i]]!=-1 && m2[a[i]]<1)
		{	r.push_back(a[i])  ; s++; m2[a[i]]++; }
	}
	cout<<s<<endl;
	for(int i=0;i<r.size();++i)
	 cout<<r[i]<<" "<<c[r[i]]<<endl;
	
}
