#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}

int main() {

	clock_t begin = clock();
	file_i_o();
	//.....
	int t;
	ll n, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b;
		ll s = 1;
		if (a == 1) {
			if ((n - s) % b == 0) {
				cout << "Yes" << endl;

			}
			else {
				cout << "No" << endl;
			}
			continue;
		}

		int pos = 0;
		while (s <= n) {
			if ((n - s) % b == 0) {
				cout << "Yes" << endl;
				pos = 1;
				break;
			}
			s = s * a;
		}
		if (pos == 0)
			cout << "No" << endl;
	}


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}