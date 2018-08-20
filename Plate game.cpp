#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,r;   cin>>a>>b>>r;
	if((2*r) > min(a,b))
	{
		cout<<"Second"<<endl;
		return 0;
	}
	int re = 2*(int)(((a/2)-r)/2*r) + 2*(int)(((b/2)-r)/2*r);
	
	if(re%2==0)
	cout<<"First"<<endl;
	else
	cout<<"Second"<<endl; 
}
