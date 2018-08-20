#include <bits/stdc++.h>
using namespace std;
int lps[1000005];
bool mark[1000005];
int main()
{
   string s;   cin>>s;
   memset(mark,false,sizeof(mark));
   int n = s.length();
   int l=0;
   int i=1;
   while(i<n)
   {
   	  if(s[i]==s[l])
   	  {
   	        l++;
			lps[i] = l; 
			if(i<n-1) mark[l] = true;
			++i;
	   }
	   else
	   {
	   	  if(l!=0)
	   	  {
	   	     l = lps[l-1]; 	
		  }
		  else
		  {
		  	lps[i] =0;
		  	i++;
		  }
      }
   }
 //  for(int i=0;i<n;++i)
   //cout<<lps[i]<<" ";  cout<<endl;
    l = lps[n-1];
   //cout<<l<<endl;
   
  /* while(l&&!mark[l]) 
   {
   l = lps[l-1];
   cout<<l<<" ";
   }  */
   if(mark[l])
   {
   	  cout<<s.substr(0,l)<<endl;  return 0;
   }
   if(lps[l-1]!=0)
   {
      l = lps[l-1];
    cout<<s.substr(0,l)<<endl;
  }
   else
   cout<<"Just a legend"<<endl;
}
