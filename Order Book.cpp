#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;    cin>>n>>s;
	vector<int> a,b;
	map<int,int> m1;
	map<int,int> m2;
	bool flag = false, flag1 = false;
	for(int i=0;i<n;++i)
	{
		char c;  cin>>c;
		if(c=='B')
		{
			flag = true;
			int x,y;  cin>>x>>y;
			if(m1[x]<1)  
			a.push_back(x);  m1[x] = m1[x] + y;
		}
        else
		{
			flag1 = true;
			int x,y;  cin>>x>>y;
			if(m2[x]<1)   
			 b.push_back(x);  m2[x] = m2[x] + y;
		}
	}
	if(flag1)
	{ 
	     int k = b.size();
	     sort(b.begin(),b.end());   reverse(b.begin(),b.end());
	     for(int i=0;i<min(s,k);++i)
	    {
		cout<<"S"<<" "<<b[i]<<" "<<m2[b[i]]<<endl;
	    }
		  
	} 
	 if(flag)
	{
		int k = a.size();
	    sort(a.begin(),a.end()); 	 reverse(a.begin(),a.end());
	    for(int i=0;i<min(s,k);++i)
	   {
		cout<<"B"<<" "<<a[i]<<" "<<m1[a[i]]<<endl;
	   }
		  
	}
}
