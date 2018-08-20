#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long i,j,x,k,count=0;
    cin>>i>>j>>k;
    
    for( x=i;x<=j;x++){
    	int y=0,z;
        int num=x;
        int m = x;
        while(m!=0)
		{
            z=m%10;
            y=y*10+z;
            m=m/10;
        
        }
        if((abs(num-y))%k==0)
            count =count+1;
    
    
     } 
    cout<<count;
    return 0;
}
