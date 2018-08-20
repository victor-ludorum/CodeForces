#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void printD(int n)
{
	for(int i=1;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
		v.push_back(i);
		
		if(n/i!=i)
		{
			v.push_back(n/i);
		}
		
	    }
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n;   cin>>n;
	printD(n);
	sort(v.begin(),v.end(),greater<int>());
//	for(int i=0;i<v.size();++i)
//	cout<<v[i]<<" ";
	
	int r=-1;
	for(int i=0;i<v.size();++i)
	{
	//	cout<<v[i]<<endl;
		int k = 0;
		int h = 0;
		while(pow(2,k)<v[i])
		{
			int g = pow(2,k);
			if(v[i]%g==0)
			{
				h = max(h,k);
			}
			k++;
	//		cout<<"value of h is "<<h<<endl;
		}
		if((pow(2,h))*(pow(2,h+1)-1)==v[i])
		{
			r = v[i]; break;
		}
	}
	  cout<<r<<endl;
}
