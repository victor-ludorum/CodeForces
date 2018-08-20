#include <bits/stdc++.h>
using namespace std;
string a,b,r="";
void f()
{
	map<char,int> m;
	for(int i=0;i<k;++i)
	{
		
	}
}
int main()
{
	cin>>a>>b;
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	int n = a.length();
	int l = b.length();
	if(a<b)
	{
		cout<<a<<endl; return 0;
	}
	reverse(a.begin(),a.end());	
	map<int,int> m;
	bool flag = false;
	for(int i=0;i<l;++i)
	{
		char f = '0';
		bool flag1 = false; 
		int j,in;
		for(j=0;j<n;++j)
		{
			if(m[j+1]<1)
			{
				
			if(f<=a[j] && a[j]==b[i])
			{
				f = a[j];
				in = j+1;
				flag1 = true;
				break;
			}
			else if(f<=a[j] && a[j]<b[i])
			{
				f = a[j];
				in = j+1;
				flag1 = true;
			}
			
		    }
		}
		cout<<j<<" "<<a[j]<<" "<<b[i]<<endl;
		if(j==n) j--;
		
		m[in]++;
		
		if(f<b[i] && flag1)
		flag = true;
		
		if(!flag1)
		{
		  for(int k=i-1;k>=0;--k)
		  {
		  	char re;
		    for(int h=0;h<n;++h)
			{
			  if(a[h]<a[k])
			  	re = a[h];
			}	
			r[k] = re;
		  }	
		  
		  f(r);
		}
		if(flag1)
		r+=f;
		
		if(flag==true)
		break;
	}
//	cout<<r<<endl;
	if(flag)
	{
		string g="";
		for(int i=0;i<n;++i)
		{
			if(m[i+1]<1)
			g+=a[i];
		}
	sort(g.begin(),g.end());
	reverse(g.begin(),g.end());
	r+=g;				
	}
	
	cout<<r<<endl;
	
}
