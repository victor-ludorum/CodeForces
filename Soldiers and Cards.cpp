#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	queue<int> q1,q2;
	int n1;  cin>>n1;
	for(int i=0;i<n1;++i)
	{
		int x;   cin>>x;
		q1.push(x);
	}
	int n2;   cin>>n2;
	for(int i=0;i<n2;++i)
	{
		int x;   cin>>x;
		q2.push(x);
	}
	int c=0;
	int a1,b1,a2,b2;
	bool flag = true;
	int i=1;
	while(!q1.empty() && !q2.empty())
	{
		int a = q1.front();   q1.pop();
		int b = q2.front();    q2.pop();
		if(a>b)
		{
			q1.push(b);q1.push(a);
		}
		else
		{
			q2.push(a);q2.push(b);
		}
		c++;
		if((a1==b || b1==a)&&(i&1))
		{
			cout<<a<<" "<<b<<" "<<a1<<" "<<b1<<endl;
			flag = false;
			cout<<"-1"<<endl;
			break;
		}
		else if(i&1)
		{
			a1 = a;
			b1 = b;
		}
		if((a2==b || b2==a) && (!i&1))
		{
			cout<<a<<" "<<b<<" "<<a1<<" "<<b1<<endl;
			flag = false;
			cout<<"-1"<<endl;
			break;
		}
		else if(!i&1)
		{
			a2 = a;
			b2 = b;
		}
		i++;
	}
	if(flag && q1.empty())
	cout<<c<<" "<<"2"<<endl;
	else if(flag && q2.empty())
	cout<<c<<" "<<"1"<<endl;

}
