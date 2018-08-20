#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;   cin>>n;
	vector<long long> a,b;
	long long sa=0,sb=0;
	if(n==2)
	{
		cout<<"1"<<endl<<"1 1"<<endl;
		return 0;
	}
	long long s = (n*(n+1))/2;
	if(s%2==0)
	{
		cout<<"0"<<endl;
		map<long long,long long> m;
		for(long long i=1;i<n/2+1;++i)
		{
			a.push_back(i); sa+=i; 
			if(m[s/2-sa]<1 && (s/2-sa)<n && (s/2-sa)>0)
			{
				a.push_back(s/2-sa);
				break;
			}			
			a.push_back(n-i+1);
			sa+=(n-i+1);
			m[i]++; m[n-i+1]++;
			
			if(s/2-sa==0)
			break;
			
			if(m[s/2-sa]<1 && (s/2-sa)>0 && (s/2-sa)<n)
			{
				a.push_back(s/2-sa);
				break;
			}
		}
		cout<<a.size()<<" ";
		for(long long i=0;i<a.size();++i)
		cout<<a[i]<<" ";		
	}
	else
	{
		cout<<"1"<<endl;
		for(int i=n;i>=1;--i)
		{
			if(sa+i<=s/2)
			{
			sa+=i;
			a.push_back(i);
		    }
		}
		cout<<a.size()<<" ";
		for(int i=0;i<a.size();++i)
		cout<<a[i]<<" ";
		
	}
}
