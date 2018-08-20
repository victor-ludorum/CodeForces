#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main()
{
	
	int n;  cin>>n;
	string s;
	 cin>>s;
	 int r=1;
	 for(int i=0;i<n-1;++i)
	 {
	 	if(s[i]!=s[i+1])
	 	r++;
	 }
	 cout<<min(r+2,n)<<endl;
}
