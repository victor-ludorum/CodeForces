#include <bits/stdc++.h>
using namespace std;
int main()
{
	string n;   cin>>n;
	stack<char> s;
	s.push(n[0]);
	for(int i=1;i<n.length();++i)
	{
		if(!s.empty() && s.top()==n[i])
		{
			s.pop();
		}
		else
		s.push(n[i]);
	}
	if(s.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
