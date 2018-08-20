#include<bits/stdc++.h>
using namespace std;
int c[1000004];
int main()
{
	int n,k;   cin>>n>>k;
	string s;   cin>>s;
	map<char,int> m;
	bool flag = false;

	for(int i=1;i<=n;++i)
	{
		if(m[s[i-1]]<1)
		m[s[i-1]] = i ;
		else
		{  
		  map<char,int> ma;
		  int l=0;
		  for(int j=m[s[i-1]];j<i;++j)
		  {
		  	if(ma[s[j]]<1)
		  	  {
		  		ma[s[j]]++;  l++;
			  }
			  if(l>k) break;
		  }
		  if(l>k)
		  flag = true;
		  
		  m[s[i-1]] = i;	
		}
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
