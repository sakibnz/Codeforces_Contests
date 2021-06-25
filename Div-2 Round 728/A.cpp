#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n, i;
		cin >> n;
		if (n % 2) {
			for (i = 1; i < n - 1; i++) {
				if (i % 2) cout << i + 1 << " ";
				else cout << i - 1 << " ";
			}
			cout << i + 1 << " ";
			cout << i - 1 << "\n";
		}
		else {
			for (i = 1; i <= n; i++) {
				if (i % 2) cout << i + 1 << " ";
				else cout << i - 1 << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
