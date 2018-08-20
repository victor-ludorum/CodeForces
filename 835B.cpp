#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long k,s=0;   cin>>k;
	string n;   cin>>n;
	for(int i=0;i<n.length();++i)
	{
		s = s + n[i] - '0';
	}
	if(s>=k)
	cout<<"0"<<endl;
	else
	{
		long c=0;
		sort(n.begin(),n.end());
		for(int i=0;i<n.length();++i)
		{
			int h = n[i] - '0';
			s = s + (9-h);
			c++;
		    if(s>=k)
		    {
		    	break;
			}
		}
		cout<<c<<endl;
	}
}
