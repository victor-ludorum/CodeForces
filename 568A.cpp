#include <bits/stdc++.h>
using namespace std;
bool v[100000]={0},w[100000]={0};
int main()
{
	int c[100000],d[100000];
	for(int i=2;i<=10000;++i)
	{
		if(!v[i])
		{
			for(int j=2*i;j<=10000;j+=i)
			{
				v[j] = true;	
			}
		}
	}
	
	c[1] = 0;
	for(int i=2;i<=10000;++i)
	{
       if(!v[i])
       	  c[i] = c[i-1] + 1;
	   else
	      c[i] = c[i-1];
	}
	
	d[0] = 0;
	for(int i=1;i<=10000;++i)
	{
		int k = i;
		
		stringstream ss;
        ss << k;
        string str = ss.str();
        
        string g = str;
        reverse(str.begin(),str.end());
        
        if(g==str)
        w[i] = true;     
	}
	
	for(int i=1;i<=10000;++i)
	{
		if(w[i])
        d[i] = d[i-1] + 1;
        else
        d[i] = d[i-1];
	}
	int p,q;   cin>>p>>q;
	int n = 0;
	while(c[n]<=((p*d[n])/q))
	{
		n++;
	}
	if(n>0)
	cout<<n-1<<endl;
	else
	cout<<"Palindromic tree is better than splay tree"<<endl;
}
