#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;    cin>>n;
	stack<int> a,b,c;
	for(int i=0;i<n;++i)
	{
		int x;   cin>>x; a.push(x);
	}
	sort(a.begin(),a.end()); reverse(a.begin(),a.end());
	int mx = a[0];
	b.push(a[0]);
	long s1 = a[0] , s2 = 0;
	for(int i=1;i<n;++i)
	{
	  if((s1 - s2) >= mx )
	  c.push(a[i]), s2 = s2 + a[i];
	  else if((s2 - s1) >= mx)
	  b.push(a[i]) , s1 = s1 + a[i];
	  else
	  c.push(a[i]), s2 = s2 + a[i];
	}
	  if((s1 - s2) >= mx )
	   {
	   	  b.pop(); 
	   	  c.push(a[i]), s2 = s2 + a[i];
	   }
	   else if((s2 - s1) >= mx)
	   {
	   	  c.pop();
	  	  b.push(a[i]) , s1 = s1 + a[i];
	   }
	
	cout<<b.size()<<endl;
	for(int i=0;i<b.size();++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	cout<<c.size()<<endl;
	for(int i=0;i<c.size();++i)
	{
		cout<<c[i]<<" ";
	}
}
