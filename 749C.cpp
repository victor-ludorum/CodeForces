#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	string s;  cin>>s;
	queue<int> p,q;
	for(int i=0;i<n;++i)
	{
		if(s[i]=='D')
		p.push(i);
		else
		q.push(i);
	}
	bool flag = true;  int i=0;
	while(!p.empty() && !q.empty())
	{
		if(p.front()<q.front())
		{
			q.pop(); p.push(p.front()+ n); p.pop();
		}
		else
		{
			p.pop(); q.push(q.front()+ n); q.pop();			
		}
	}
	if(q.empty())
	cout<<"D"<<endl;
	else
	cout<<"R"<<endl;
}
