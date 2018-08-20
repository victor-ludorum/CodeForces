#include <bits/stdc++.h>
using namespace std;
int main()
{
	int b,q,l,m;    cin>>b>>q>>l>>m;
	int a[m+1];
	map<int,int> ma,p;
	for(int i=0;i<m;++i)
	{
		cin>>a[i];  ma[a[i]]++;
	}
	if(b==0 && q==0)
	{
		cout<<"inf"<<endl;  return 0;
	}
	if(b==0)
	{
		cout<<"0"<<endl;  return 0;	
	}
	
	if(l>abs(b) && abs(q)<=1 && ma[b*q] < 1)
    {
		cout<<"inf"<<endl;  return 0;
    }
	else if((l<abs(b) && abs(q)>1)||(abs(q)<=1 && abs(b)<l && ma[b] >0))
	{
		cout<<"0"<<endl;  return 0;
	}
	bool flag = true;
	int c=0;
	while(flag)
	{
		if(p[b]<1)
		p[b]++;
		else
		{
			cout<<"inf"<<endl;   return 0;
		}
		
		if(ma[b]<1 && abs(b)<=l) 
		c++;
		
		if(abs(b)>l || (ma[b]>0 && q==0))
		flag = false;
		
		b = b*q; 
	}
	
	cout<<c<<endl;		
}
