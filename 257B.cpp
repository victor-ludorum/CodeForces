#include <bits/stdc++.h>
using namespace std;
int s=0,t=0;
pair<int,int> check(int n, int m, char a, char b)
{
	vector<char> v;
	v.push_back(a),n--;
	char pr = a;
	int j=0;
	while(n>0 || m>0)
	{
		if(j%2==0)
		{
			if(pr==a)
			{
				if(m>0)
				v.push_back(b), pr = b,m--;
				else
				v.push_back(a), pr = a,n--;
			}
			else
			 {
				if(n>0)
				v.push_back(a), pr = a,n--;
				else
				v.push_back(b), pr = b,m--;			 	
			 }
		}
		else
		{
			if(pr==a)
			{
				if(n>0)
				v.push_back(a), pr = a,n--;
				else
				v.push_back(b), pr = b,m--;
			}
			else
			 {
				if(m>0)
				v.push_back(b), pr = b,m--;
				else
				v.push_back(a), pr = a,n--;			 	
			 }
		}
		j++;
	}
	pair<int,int> p; p.first =0; p.second=0;
	  for(int i=1;i<v.size();++i)
	  {
	  	  if(v[i]==v[i-1])
	  	  p.first++;
	  	  else
	  	  p.second++;
	  }
	  return p;
}
int main()
{
	int n,m;   cin>>n>>m;
	pair<int,int> p,q;
	p = check(n,m,'R','B');
	q = check(m,n,'B','R');
	
	if(p.first>q.first)
	cout<<p.first<<" "<<p.second<<endl;
	else if (q.first>p.first)
	cout<<q.first<<" "<<q.second<<endl;
	else if(p.first==q.first)
	{
		if(p.second>q.second)
	    cout<<q.first<<" "<<q.second<<endl;
        else
	    cout<<p.first<<" "<<p.second<<endl;		
	}
}
