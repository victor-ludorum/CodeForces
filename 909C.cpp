#include <iostream>
using namespace std;
const int N = 5010,M = 1e9 + 7;
int dp[N];

int main()
{
	int n, cnt = 0; cin >> n;
	char c;
	dp[0] = 1;
	while(n--)
	{
		cin >> c;
		if (c == 'f')
			cnt++;
		else
			for (int i = 1; i <= cnt; ++i)
				dp[i] += dp[i - 1], dp[i] %= M;
	}

	cout << dp[cnt] << endl;
}
