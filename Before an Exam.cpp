#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d,s;  cin>>d>>s;
	vector<int> a,b,r;
	int s1 = 0, s2 =0;
	for(int i=0;i<d;++i)
	{
		int x,y;   cin>>x>>y; a.push_back(x);  b.push_back(y);
		s1 = s1 + x;
		s2 = s2 + y;
	}
	if(s>=s1 && s<=s2)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<d;++i)
		{
			r.push_back(a[i]);
			s = s - a[i];
		}
//		cout<<s<<endl;
		if(s!=0)
		{
		for(int i=0;i<d;++i)
		{
			for(int j=a[i]+1;j<=b[i];++j)
		  {
				if((s-j+r[i])>=0)
			{
			  s = s + (r[i] - j);
			  r[i] = j;			  
//			  cout<<s<<" "<<j<<endl;
		    }
		    if(s==0)
		    break;
		  }
		 
		}
	    }
	    for(int i=0;i<d;++i)
	    cout<<r[i]<<" ";
	}
	else
	cout<<"NO"<<endl;
	
}
