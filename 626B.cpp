#include <bits/stdc++.h>
using namespace std;
char a[205][205];
int main()
{
	int n;  cin>>n;
	string s;  cin>>s;
	map<char,int> m;
	for(int i=0;i<n;++i)
	m[s[i]]++;
	if(m['B']>=1 && m['G']>=1 && m['R']>=1)
	{
		cout<<"BGR"<<endl;
	}
	else if((m['B']>=2 && m['G']>=2)||(m['B']>=2 && m['R']>=2) || (m['R']>=2 && m['G']>=2))
	{
		cout<<"BGR"<<endl;
	}
	else if(m['B']==n||m['G']==n||m['R']==n)
	{
		cout<<s[0]<<endl;
	}
	else if(n==2)
	{
		if(m['G']<1)
		cout<<"G"<<endl;
		else if(m['B']<1)
		cout<<"B"<<endl;
		else if(m['R']<1)
		cout<<"R"<<endl;
	}
	else
	{
		if((m['B']>=2 && m['G']==1))
		cout<<"GR"<<endl;
		else if((m['B']>=2 && m['R']==1))
		cout<<"GR"<<endl;
		else if((m['B']==1 && m['R']>=2))
		cout<<"BG"<<endl;
		else if(((m['B']==1 && m['G']>=2)))
		cout<<"BR"<<endl;
		else if((m['R']>=2 && m['G']==1))
		cout<<"BG"<<endl;
		else if((m['R']==1 && m['G']>=2))
		cout<<"BR"<<endl;
	}
}
