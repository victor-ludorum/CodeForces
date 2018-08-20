#include <bits/stdc++.h>
using namespace std;

int total_number_of_digits ( int n )
{
	int number_of_digits = 0 ;
	
	for(int i = 1 ; i <= n ; i *= 10 )
	{
		number_of_digits += ( n - i + 1 );
	}
	
	return number_of_digits ;
}
// Driver program
int main()
{
	int n = 13 ;
	cout << total_number_of_digits(n) << endl;
}
/* int main()
{
	long long int number;  cin>>number;
	int number_of_digits=0;
	long long int m=number;
	while(m!=0)
	{
		m = m / 10;
		number_of_digits++;
	}
	long long int total_digits=0;
	long long int k=0;
	for(int i=1;i<number_of_digits;++i)
	{
		total_digits = total_digits + (i*(pow(10,i)-k-1));
		k = k + (pow(10,i)-k-1);
		cout<<total_digits<<" "<<k<<endl;
	}
	long long int p = number- pow(10,number_of_digits-1) + 1;
	total_digits= total_digits + number_of_digits*p;
	cout<<total_digits<<endl;
} */
