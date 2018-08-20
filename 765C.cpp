#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long k,a,b;   cin>>k>>a>>b;
	if(k>max(a,b))
	{	cout<<"-1"<<endl;  return 0;   }
	int c1=0,c2=0;
	while(a>=k || b>=k)
	{
				
		if(a>b && a>=k)
		{
			long h = a/k;	a = a - h*k; c1 = h;
			if(a==0 && b<k && c1!=0)
			{
		//		cout<<"helo"<<endl;
				cout<<c1+c2<<endl;  return 0;
			}
		}
		else if(b>=k)
		{
			long h = b/k;	b = b - h*k; c2 = h;
			if(b==0 && a<k && c2!=0)
			{
		//			cout<<"helo 1"<<endl;
				cout<<c1+c2<<endl;  return 0;
			}
		}
		
		if((c1==0 && c2>0 && a<k && b<k && max(a,b)>0 && min(a,b)>=0) || 
		   (c2==0 && c1>0 && a<k && b<k && max(a,b)>0 && min(a,b)>=0))
		{
		   cout<<"-1"<<endl;  return 0;			
		}
						
		
	//	cout<<a<<" "<<b<<endl;
	}
	cout<<c1+c2<<endl;
}
