#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
     vector<long long > v;
     for(int i=0;i<n;++i)
     {
     	long long x;  cin>>x;
     	v.push_back(x);
	 }
	 sort(v.begin(),v.end());
	 long c=1;
	 for(int i=0;i<n;++i)
	 {
	 	if(v[i]!=c)
	 	{
	 	   if(v[i]>c)
			{
			   v[i]=c; c++;	
			}	
		}
		else
		c++;
	 }
	 cout<<c<<endl;
	 
}
