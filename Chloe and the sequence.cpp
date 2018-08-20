#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,p;   cin>>n>>p;
	long l = pow(2,n)-1;
    vector<long> s;
    int k=0;
    s.push_back(1);
    for(int i=1;i<n;++i)
    {
    	s.push_back(i+1);
    	long h = s.size();
    //	cout<<"hello"<<endl;
         long j=1;
    	while(j!=h)
    	{
    		s.push_back(s[j-1]);j++;
		}
	}
	cout<<s[p-1]<<endl;
}
