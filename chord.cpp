#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s[] = {"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
	string a,b,c;    cin>>a>>b>>c;
	int x[13];
	for(int i=0;i<12;++i)
	{
		if(s[i]==a||s[i]==b||s[i]==c)
		    x[i] = 1;
	}
	for(int i=0;i<12;++i)
	{
		if(x[i]==1)
		{
			if(x[(i+4)%12]==1&&x[(i+7)%12]==1)
			  {
			  	cout<<"major"<<endl;  return 0;
			  }
			  else if(x[(i+3)%12]==1&&x[(i+7)%12]==1)
			  {
			  	cout<<"minor"<<endl;   return 0;
			  }
		}
	}
	cout<<"strange"<<endl;
}
