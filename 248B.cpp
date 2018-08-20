#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	m[1] = 3; m[2] = 2; m[3] = 6; m[4] = 4; m[5] = 5; m[0] = 1;
	int n;    cin>>n;
	if(n<3)
	cout<<"-1"<<endl;
	else if(n==3)
	cout<<"210"<<endl;
	else
	{
		int h = m[(n-2)%6];
		string s = "1";
		for(int i=1;i<=n-4;++i)
		{
			s+='0';
		}
		int x = 7 - h;
//		cout<<h<<" "<<x<<endl;
		while(true)
		{
			if((x+1)%3==0)
			break;
			x+=7;
		}
		if(x<10)
		s+='0';
		stringstream ss;
		ss << x;
		string str = ss.str();
		s+=str;
		s+='0';
		cout<<s<<endl;
	}
}
