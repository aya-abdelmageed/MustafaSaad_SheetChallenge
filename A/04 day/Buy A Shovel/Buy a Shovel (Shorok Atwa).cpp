// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, r, ans = 1, total;
	cin >> k >> r;
	while (ans) {
		total = ans * k;
		if (total % 10 == 0 ||total % 10 == r)
			break;
		ans++;
	}
	cout << ans;
    return 0;
}