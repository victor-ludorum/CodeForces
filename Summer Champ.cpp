#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	int k = 1;
	for(int i=0;i<1000;++i)
	{
		cout<<k++<<" ";
	}    */
	int n;   cin>>n;
	int j = 9;
	if(n<=9)
	{
		cout<<n<<endl;
    }
    else if(n<=189)
    {
    	for(int i=10;i<=99;++i)
    	{
    		j++;
    		if(j==n)
    		cout<<i/10<<endl;
    		j++;
    		if(j==n)
    		cout<<i%10<<endl;
		}
	}
	else
	{
		j = 189;
    	for(int i=100;i<=999;++i)
    	{
    		j++;
    		if(j==n)
    		cout<<i/100<<endl;
    		j++;
    		if(j==n)
    		cout<<(i%100)/10<<endl;
    		j++;
    		if(j==n)
    		cout<<i%10<<endl;
		}		
	}
}
