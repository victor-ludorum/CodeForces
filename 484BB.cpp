#include <bits/stdc++.h>
using namespace std;

int MaximumRemainder(int a[],int n)
{
	// mx stores the maximum value of array 
	int mx= 0 , b[n+1];
	memset(b,0,sizeof(b));
	
 for (int i = 0; i<n ; i++)
 {
    b[ a[i] ] = a[i];
    // mx stores the maximum
	// value of the array
    mx = max(mx,a[i]);
 }
 // ans stores the final answer .
  int ans = 0;
 // Here in this loop we are assigning 
 // values in the array b as b[i] = b[i-1]
 // by which we assign those index of array b
 // which is present in the array . By assigning
 // previous value we can assure that remainder 
 // is basically less than that index and what
 // would be the remainder if we divide those
 // values with these index values , which is what
 // done in the next loop .
 for (int i=1 ; i<=2*mx ; i++)
 {
 	// those index which are not
 	// present in array is initialized as
 	// 0.
    if (b[i] == 0)
    {
   	// prroviding previous value 
	 b[i] = b[i-1];
    }
}
// Now in this loop we are calculating
// the maximum remainder . In the previous 
// loop we have assigned value to all the elements
// of array b i.e previous value . Due to this we 
// can calculate remainder of those array elements
// which is not divisible by any particular array
// elements smaller than it .  
 for (int i=2 ; i<=mx ; i++)
{
// first we check whether the element
// is present in the array or not 
    if (b[i] == i)
  {
  	// Through this loop we can check 
  	// for all values remainder for all 
  	// values divisible by i . As if that
	// element(divisible by i) is not there
	// then due to the array b smaller element
	// than that value is there at that index j.
	// That's why we have assigned previous value
	// in the array b.
   for (int j=2*i-1;j<=2*mx;j+=i)
    {
    	// checking whether tha ans is maximum .
       if (i <= b[j] && ans < b[j]%i)
	   {	 
	    ans = b[j]%i;
	   }
    }
  }
}

   return ans;	
}

int main()
{
int a[] = { 3 , 4 , 5 };
int n = sizeof(a)/sizeof(a[0]);
cout << MaximumRemainder(a,n) << endl;

return 0;
}
