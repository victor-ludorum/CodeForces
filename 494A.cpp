#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001];
int main()
{
	string s;   cin>>s;
	  bool flag = true;  int c=0;
	vector<int>v;   int a=0,b=0,r=0;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='(') a++;
		else if(s[i]==')') b++;
		else if(s[i]=='#')
		{
			c++;
			if(a-b<=0)
			{
				flag = false;
			}
			else
			b = a-1, r+=(a-b);
		}
	}
	if(!flag || a!=b)
	cout<<"-1"<<endl;
	else
	{
		for(int i=0;i<c-1;++i)
		cout<<"1"<<endl;
		cout<<(r-c+2)<<endl;
	}
	
}
