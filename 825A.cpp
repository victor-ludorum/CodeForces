#include <bits/stdc++.h>
using namespace std;
int main()
 {
 	int n;  cin>>n;  string s;  cin>>s;
 	int y=0;
 	for(int i=0;i<n;++i)
 	{
 		if(s[i]=='0') y++;
	 }
	 if(y==n)
	 {
	 	for(int i=0;i<(n+1)/2;++i)
	 	{
	 		cout<<"0";
		 }
		 return 0;
	 }
 	long long k=0; int c=0; vector<int> r;
 	for(int i=0;i<n;++i)
 	{
 		if(s[i]=='1')
 		k++ , c=0;
 		else if(s[i]=='0' && c==0 && k!=0)
 		 r.push_back(k) , c=1 , k=0;
 		else if(s[i]=='0' && c==0 && k==0)
		 c=1; 
 		else if(s[i]=='0' && c==1)
 		{
 		r.push_back(0)  ; c=0;	
		 }
	 }
	 if(k>0)
	 r.push_back(k);
	 for(int i=0;i<r.size();++i)
	 {
	 	cout<<r[i];
	 }
 }
