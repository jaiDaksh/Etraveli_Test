#include <bits/stdc++.h>
using namespace std;

void countWays(int n)
{
	
	if (n <= 2)
		cout << "-1";

	else {
		
		int ans = (n - 1) * (n - 2) / 2;

		cout << ans;
	}
}

int main()
{
	int N = 3;

	countWays(N);

	return 0;
}
