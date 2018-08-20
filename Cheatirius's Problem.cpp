#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin>>n;
    char s[n][4];
    cin>>s[0][0]>>s[0][1]>>s[0][2]>>s[0][3];
    sort(s[0],s[0]+4);
    for(int i=1;i<n;++i)
    {
        string d;   cin>>d;
        cin>>s[i][0]>>s[i][1]>>s[i][2]>>s[i][3];
        sort(s[i],s[i]+4);
    }
    int a[n];
    for(int i=0;i<n;++i)
    a[i] = 0;

    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            int c =0;
              for(int k=0;k<4;++k)
              {
                  if(s[i][k]==s[j][k])
                  {
                  	c++; 
				  }
              }
              if(c==4 && a[i]!=-1)
              {
              	a[i]++;   a[j] = -1;
			  }
        }
    }
      int r = 0;
      for(int i=0;i<n;++i)
      {
          if(a[i]!=-1)
          r = r + 1;
      }
      cout<<r<<endl;
}
