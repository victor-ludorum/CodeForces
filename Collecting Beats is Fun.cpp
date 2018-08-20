#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;  cin>>k;
	char a[4][4];
	map<char ,int > m;
	for(int i=0;i<4;++i)
	{
		for(int j=0;j<4;++j)
		{
			cin>>a[i][j];
			m[a[i][j]]++;
		}
	}
	bool flag = true;
    map<char ,int>::iterator i;
	for(i=m.begin();i!=m.end();++i)
	{
	   if(i->second>2*k)
	   	{
	   		flag = false;   break;
	    }
	}	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

}
