#include <bits/stdc++.h>
using namespace std;

int NumberofTimes( string str)
{
  // Here the count variable store 
  // how many times we do sum of 
  // digits and temporary_sum 
  // always store the temporary	sum 
  // we get at each iteration .
   int temporary_sum = 0 , count = 0;
   
   // In this loop we always compute
   // the sum of digits in temporary_
   // sum variable and convert it 
   // into string str till its length
   //  become 1 with increase in count
   //  at each iteration.
   while( str.length() > 1 )
    {
      temporary_sum = 0 ;
      
      // computing sum of its digits 
      for( int i = 0 ; i < str.length() ; i++ )
	    temporary_sum += ( str[ i ] - '0' ) ;
	    
	 // converting temporary_sum into string str again .
      str = to_string(temporary_sum) ;
      
      // increase the count 
      count++;
    }
	
	return count ;
}
// Driver program to test the above function
int main()
{
  string s ;
  cin >> s ;
  cout << NumberofTimes( s ) ;
  return 0;
}

/*
int main()
{
	string number;   cin>>number;
	long sum=0;
	int c;
	if(number.length()>1)
	  c= 1;
	  else
	  c = 0;
	for(int i=0;i<number.length();++i)
	{
		sum = sum + (number[i]-'0');
	}
  	if(sum>9)
  	{
	while(1)
	{
		long temporary_sum=0;
		while(sum!=0)
		{
			temporary_sum = temporary_sum + (sum % 10);  sum = sum / 10;
		}
		c++;
		sum = temporary_sum;
		if(sum<=9)
		break;
	}
    }
	cout<<c<<endl;
}
*/
