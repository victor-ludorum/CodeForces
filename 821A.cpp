#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int a[n+1][n+1];
	vector<int> r[n+1];
	vector<int> c[n+1];	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			cin>>a[i][j];  r[i].push_back(a[i][j]);	  c[j].push_back(a[i][j]);
		}
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
		  if(a[i][j]!=1)
		  {
		  	bool flag = false;
		  	  for(int k=0;k<r[i].size() && !flag;++k)
		  	  {
		  	     for(int l=0;l<c[j].size();++l)
				   {
				//   	cout<<r[i][k]<<" "<<c[j][l]<<endl;
				       if(r[i][k] + c[j][l] == a[i][j])
					   {
					      flag = true;  break;	
					   }	
				   }	
			  }
			  if(!flag)
			  {
			  	cout<<"No"<<endl;  return 0;
			  }
		  }
		}
	}
	  cout<<"Yes"<<endl;
}
