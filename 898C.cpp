#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
    int n;   cin>>n;
    map <string,vector<string> > m,p;
    map <string,int> f;
    vector<string> fr;
    int len =1;
    for(int i=0;i<n;++i)
	{
	  	  string q;   cin>>q;
	  	  if(f[q]<1)
	  	  {
	  	  	f[q]++;
	  	  	fr.push_back(q);
		  }
		  int c;   cin>>c;
		  while(c--)
		  {
		    string h;  cin>>h;
			m[q].push_back(h);
		  }	
	} 
	
	for(int i=0;i<fr.size();++i)
	{
		map<string,vector<string> >:: iterator it,itr;
		for(it=m.begin();it!=m.end();++it)
		{
			if(it->first==fr[i])
			{
				map<string,int> w;
				vector<string> s;
				for(int j=0;j<it->second.size();++j)
				{
					if(w[it->second[j]]<1)
					{
						w[it->second[j]]++;
						s.push_back(it->second[j]);
					}
				}
				
				map<string,int> du;
				for(int i=0;i<s.size();++i)
				{
					for(int z=0;z<s.size();++z)
					{
					  if(s[i]!=s[z])
					  {
						
						int li = s[i].length()-1;
						for(int e=s[z].size()-1;e>=0;--e)
						{
							if(li<0)
							break;
							else if(s[i][li]==s[z][e])
							{
								li--;
							  continue;
							}
							else
							break;
						}
						if(li<0)
						{
							du[s[i]]++;
							break;
						}
					 }
					}
				}
				
				for(int i=0;i<s.size();++i)
				{
					if(du[s[i]]<1)
					p[it->first].push_back(s[i]);
				}
			}
		}
	}
	
	cout<<fr.size()<<endl;
	map<string,vector<string> >:: iterator it,itr;
		for(it=p.begin();it!=p.end();++it)
		{
			cout<<it->first<<" "<<it->second.size()<<" ";
			for(int j=0;j<it->second.size();++j)
			{
              cout<<it->second[j]<<" ";
            }
               cout<<endl;
        }
}
