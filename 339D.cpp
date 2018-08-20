#include <bits/stdc++.h>
using namespace std;
long t[1<<18];
long build(long node,long beg, long en, int toggle)
{
	if(beg==en)
	{
		long te;  cin>>te;
		t[node] = te;  return t[node];
	}
	long mid = (beg+en)/2;
	long left = build(2*node,beg,mid,toggle-1);
	long right = build(2*node+1,mid+1,en,toggle-1);
	
	if(toggle & 1)
	t[node] = left | right;
	else
	t[node] = left ^ right;
}
void update(long node,long beg,long en,long index,long value,long toggle)
{
	if(beg==en)
	{
		t[node] = value; return;
	}
	long mid = (beg+en)/2;
	if(index<=mid)
    update(2*node,beg,mid,index,value,toggle-1);
	else
	update(2*node+1,mid+1,en,index,value,toggle-1);
	
	if(toggle & 1)
	t[node] = t[2*node] | t[2*node+1];
	else
	t[node] = t[2*node] ^ t[2*node+1];
}
int main()
{
  long n,m;   cin>>n>>m;
  build(1,1,1<<n,n);
  long p,b;
  while(m--)
  {
  	  cin>>p>>b;
  	  update(1,1,1<<n,p,b,n);
  	  cout<<t[1]<<endl;
  }	
}
