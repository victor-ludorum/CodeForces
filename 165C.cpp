
#include <bits/stdc++.h>
using namespace std;
int d[1111111];
int main()
{
	string s; int k;  cin>>k>>s;
	int sum=0,total=0;  d[0] =1;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='1') sum++;
		if(sum>=k) total+=(d[sum-k]);
		d[sum]++;
	}
	cout<<total<<endl;
}

