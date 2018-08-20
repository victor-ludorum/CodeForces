#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	string s;  cin>>s;	
	for(int i=0;i<s.length()-1;++i)
	{
		if(s[i]==s[i+1])
		 a[i+1] =a[i]+1;
		else a[i+1] = a[i];
	}
//	for(int i=0;i<s.length();++i)
//	cout<<a[i]<<" ";  cout<<endl;
	
	int query;  cin>>query;
	while(m--)
	{
		int first_index,second_index;  cin>>first_index>>second_index;
		cout<<a[second_index-1]-a[first_index-1]<<endl;
	}
}
