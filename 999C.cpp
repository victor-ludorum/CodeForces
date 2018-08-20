#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n,k;   cin>>n>>k;
	string s;   cin>>s;
	map<char,int> m;
	for(int i=0;i<n;++i)
	m[s[i]]++;
	
	char d; int w; bool flag = true;
	for(char i='a';i<='z';++i)
	{
		if(m[i]<=k)
		{
			k = k-m[i];
		}
		else if(m[i]>k)
		{
			w = k;
			d = i;
			flag = false;
			break;
		}
	}
	string r="";
//	cout<<d<<" "<<w<<endl;
	if(flag)
	{
		cout<<endl; return 0;
	}
	for(int i=0;i<n;++i)
	{
	  if(s[i]>d)
	  r+=s[i];
	  else if(s[i]==d && w>0)
	  {
	  	w--;
	  }	
	  else if(s[i]==d && w<=0)
	  {
	  	r+=s[i];
	  }
	}
	
	cout<<r<<endl;
}
