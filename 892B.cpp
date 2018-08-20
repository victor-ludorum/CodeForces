#include <bits/stdc++.h>
using namespace std;
long long l[1000006];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;   cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>l[i];
	}
	stack<long long> s;
	s.push(0);
	for(long long i=1;i<n;++i)
	{		
		long long h = s.top();
		if(h>=(i-l[i]))
		{
			while(h>=(i-l[i]) && !s.empty())
			{
				s.pop();
				if(!s.empty())
				h = s.top();
				else
				break;
			}
		}		
		s.push(i);
	}
	cout<<s.size()<<endl;
}
