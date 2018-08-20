#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;  cin>>t;
	while(t--)
	{
		int n,k;   cin>>n>>k;
		vector<int> a,b,c,p,q,r,l;
		for(int i=0;i<n;++i)
		{
			string s;  cin>>s;
			int j =0;
			for(int k=0;k<2;++k)
			 j = j*10 + (s[k]-'0');
			 
             a.push_back(j);  j=0;
             
			for(int k=3;k<5;++k)
			 j = j*10 + (s[k]-'0');
			 
              b.push_back(j);  j=0;
              
			for(int k=6;k<8;++k)
			 j = j*10 + (s[k]-'0');
			 
			 c.push_back(j);  j=0;			
		}
		for(int i=0;i<k;++i)
		{
			string s;  cin>>s;
			int j =0;
			for(int k=0;k<2;++k)
			 j = j*10 + (s[k]-'0');
			 
             p.push_back(j);  j=0;
             
			for(int k=3;k<5;++k)
			 j = j*10 + (s[k]-'0');
			 
              q.push_back(j);  j=0;
              
			for(int k=6;k<8;++k)
			 j = j*10 + (s[k]-'0');
			 
			 r.push_back(j);  j=0;			
		}
		int w =0;
		for(int i=0;i<k;++i)
		{
			for(int j=0;j<n;++j)
			{
				int f,g,h;
				if(abs(c[j]-r[i]) <= abs( min(c[j],r[i]) + 60 - max(c[j],r[i]) ) )
				{
					   f = abs(c[j]-r[i]);
					   if(abs(b[j]-q[i]) <= abs( min(b[j],q[i]) + 60 - max(b[j],q[i]) ) )
					   {
					   	  g =  abs(b[j] - q[i]);
					   	  h =  abs(a[j] - p[i]);
					   }
					   else
					   {
					   	  g = abs( min(b[j],q[i]) + 60 - max(b[j],q[i]) );
					   	  h = abs(a[j] - p[i]) - 1;
					   }
				}
				else
				{
					   f = abs( min(c[j],r[i]) + 60 - max(c[j],r[i]) );
					   if(abs(b[j]-q[i])-1 <= abs( min(b[j],q[i]) + 60 - max(b[j],q[i]) )-1 )
					   {
					   	  g =  abs(b[j] - q[i]) - 1;
					   	  h =  abs(a[j] - p[i]);
					   }
					   else
					   {
					   	  g = abs( min(b[j],q[i]) + 60 - max(b[j],q[i]) ) - 1;
					   	  h = abs(a[j] - p[i]) - 1;
					   }					
				}
				l.push_back(f+g+h);
			}
			    w =  w + *min_element(l.begin(),l.end());  l.clear();
		}
		  cout<<w<<endl;
	}
}
