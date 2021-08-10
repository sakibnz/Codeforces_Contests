#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define vi vector < int >
#define vll vector < long long >
#define pb push_back
#define eb emplace_back
#define mp make_pair

void debug(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

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
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		char a1[n], a2[n];
		for (int i = 0; i < n; i++)
			cin >> a1[i];
		for (int i = 0; i < n; i++)
			cin >> a2[i];
		int cnt = 0;
		for (int i = 0; i < n; i++) {

			if (a2[i] == '1') {
				if (a1[i] == '0') cnt++;
				else if (i != 0 && a1[i - 1] == '1') {
					cnt++;
					a1[i - 1] == 2;
				}
				else if (i != n - 1 && a1[i + 1] == '1') {
					cnt++;
					a1[i + 1] = 2;
				}
			}
		}
		cout << cnt << endl;
	}


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}