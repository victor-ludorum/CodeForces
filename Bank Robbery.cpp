#include<iostream>
#include<map>
using namespace std;
int main()
{
	long a,b,c ;   cin>>a>>b>>c;
	int n;   cin>>n;
	map<long ,int> ma;
	for(int i=0;i<n;++i)
	{
		long x;   cin>>x; ma[x]++;
	}
	long s=0;
	for(long i=b+1;i<c;++i)
	{
		s = s + ma[i];
	}
	cout<<s<<endl;
}
