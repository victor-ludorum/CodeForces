#include<bits/stdc++.h>
using namespace std;
int main()
{
   long n;   cin>>n;
   vector<long> a,b;
   map<int,int> m;
   map<int,int> m1;
   for(int i=0;i<n;++i)
   {
   	long x,y;   cin>>x>>y;   a.push_back(x);   b.push_back(y);  m[x]++;  m1[y]++;
   }
   for(int i=0;i<n;++i)
   {
   	long h,g;
   	      h = n-1 + (m[b[i]]);	
	   	  g = n-1 - (m[b[i]]);
	   cout<<h<<" "<<g<<endl;
   }
}
