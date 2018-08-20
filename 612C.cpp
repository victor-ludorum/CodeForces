#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	stack<char> p;
	int n = s.length();
	map<char,int> m;
		m['{'] = 1; m['}'] = 2; m['<'] = 3; m['>'] = 4; m['['] = 5; m[']'] = 6; m['('] = 7; m[')'] = 8;

	if(s[0]=='}'||s[0]==']'||s[0]=='>'||s[0]==')')
	cout<<"Impossible"<<endl;
	else
	{
		int r=0;
		p.push(s[0]);
		for(int i=1;i<n;++i)
		{
	      if(s[i]=='}'||s[i]==']'||s[i]=='>'||s[i]==')')
		  {
		  	 if(p.empty())
		  	 {
		  	 	cout<<"Impossible"<<endl;  return 0;
			 }
             char t = p.top();
    //         cout<<t<<" "<<m[s[i]]-m[t]<<endl;
			 if(m[s[i]]-m[t]!=1)
			 r++,p.pop();
			 else if(m[s[i]]-m[t]==1)
			 p.pop();
		  }
		  else
		  	p.push(s[i]);		
		}
		if(p.empty())
		cout<<r<<endl;
		else
			cout<<"Impossible"<<endl; 
	}
}
