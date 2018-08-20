#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	string s;   cin>>s;
    vector<char> d;
    map<char,int> m;
    m['a']++; m['e']++; m['i']++; m['o']++; m['u']++ ; m['y']++;
	d.push_back(s[0]);
	for(int i=1;i<s.length();++i)
	{
		if(m[s[i-1]]>0 && m[s[i]]>0)
		continue;
		else
		d.push_back(s[i]);
//		if(m[d[d.size()-1]] > 0 && m[d[d.size()-2]]>0)
//		d.pop_back();
	}
	
	for(int i=0;i<d.size();++i)
	cout<<d[i];
	cout<<endl;
}
