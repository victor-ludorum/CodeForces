#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,r,avg;   cin>>n>>r>>avg;
	vector< pair<long,long> > p;
	long long h =0;
	for(int i=0;i<n;++i)
	{
		long long x,y;   cin>>x>>y;  p.push_back(make_pair(y,x)); h=h+x;
	}
	if(h>=(avg*n))
	{
		cout<<"0"<<endl;  return 0;
	}
	else
	{
	   sort(p.begin(),p.end());  long long c=0;
/*	   for(int i=0;i<n;++i)
	   cout<<p[i].first<<" "<<p[i].second<<endl;  */
	   int i=0;
	   while(h<(avg*n))
	   {
//	   	cout<<r-p[i].second<<" "<<(avg*n)-h<<endl;
	   	 if((r-p[i].second)<=(avg*n)-h)
	   	  c = c + (r-p[i].second)*p[i].first, h = h + (r-p[i].second); 
	   	 else
	   	  c = c + ((avg*n)-h)*p[i].first,     h = (avg*n); 
	   	  i++;
//	   	  cout<<c<<endl;
	   }
	   cout<<c<<endl;
    }
}
