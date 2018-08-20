#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[] = {1 , 0 , 1 , 0 , 1 , 1};
	 int n = sizeof(array)/sizeof(array[0]);
	 long number_of_ways = 0;
	/*  The number_of_ways  is initialized as 0 so that if an array contain
	     only 0 then there should not be any partition */
	int previous_one = -1;
	/* The previous_one stores index having value '1' and is initialized as -1 so that if
	   the array contain only 0 then number of ways should remain 0, otherwise previous_one store
	   the previous index of array having value 1 */
	for( int index = 0 ; index < n ; ++index )
	{
		if( array[index] == 1 )
		{
			if ( previous_one == -1)
			  number_of_ways = 1;
			else
			number_of_ways = number_of_ways * ( index - previous_one );
			/*  number_of_ways is multiplied by the difference two consecutive
			    index having value 1  */
			previous_one = index;
		}
	}
	cout << number_of_ways << "\n";
}
