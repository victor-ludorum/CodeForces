#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;   cin>>a>>b>>c;
	if(a==1 || b==1 || c==1)
	{
		cout<<"YES"<<endl; return 0;
	}
	if((a==2 && b==2)||(a==2 && c==2)&&(b==2 && c==2))
	{
		cout<<"YES"<<endl; return 0;
	}
    else if(a==3 && b==3 && c==3)
	{
		cout<<"YES"<<endl; return 0;
	} 
	else
	{
		map<int,int> m;
		m[a%3]++; m[b%3]++; m[c%3]++;
		int v[3];
		v[0] = a; v[1] = b; v[2] = c;
		sort(v,v+3);
		if(m[0]>0 && m[1]>0 && m[2]>0)
		{
			if(v[0]%3==0 && v[1]%3==1 && v[2]%3==2)
			{
				cout<<"YES"<<endl; return 0;
			}
		}
	    cout<<"NO"<<endl;			
	}
}
