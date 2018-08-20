#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3;
queue<int> q1,q2;
int main()
{
	int n,t;   cin>>n>>t;
    cin>>s1>>s2;
	int c=0,d=0;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		if(s1[i]!=s2[i]) q2.push(i);
		else if(s1[i]==s2[i]) q1.push(i);
	}
	if(q2.size()>2*t)
	{
	cout<<"-1"<<endl; return 0;
    }
    t = n-t;
    while(!q2.size()>1 && t)
    {
    	int x = q2.front(); q2.pop();
    	int y = q2.front(); q2.pop();
    	t--;
    	s3[x] = s1[x];
    	s3[y] = s2[y];
	}
	
	while(!q2.empty())
	{
		int x = q2.front();  q2.pop();
		for(char i='a' ;i<='z';++i)
		{
			if(s1[i]!=i && s2[i]!=i)
			s3[x] = i;
		}
	}
	
	while(!q1.empty() && t)
	{
		int x = q1.front(); q1.pop();
		s3[x] = s1[x];
		t--;
	}
	
	while(!q1.empty())
	{
		int x = q1.front();  q1.pop();
		for(char i='a' ;i<='z';++i)
		{
			if(s1[i]!=i && s2[i]!=i)
			s3[x] = i;
		}		
	}
	
	cout<<s3<<endl;
}
