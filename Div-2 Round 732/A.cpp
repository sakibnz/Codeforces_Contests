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
		int n, sum = 0;
		cin >> n;

		int a1[105], a2[105], a3[105];

		stack < int > st1;
		stack < int > st2;

		for (int i = 0; i < n; i++)
			cin >> a1[i];

		for (int i = 0; i < n; i++)
			cin >> a2[i];

		for (int i = 0; i < n; i++) {
			a3[i] = a2[i] - a1[i];
			sum += a3[i];
			if (a3[i] > 0) {
				while (a3[i]--) {
					st2.push(i + 1);
					// cout << st2.top() << endl;
				}
			}
			else if (a3[i] < 0) {
				a3[i] *= -1;
				while (a3[i]--) {
					st1.push(i + 1);
				}
			}
		}

		if (sum != 0) {
			cout << "-1" << endl;
		}
		else {
			cout << st1.size() << endl;
			while (st1.empty() == 0) {
				cout << st1.top() << " " << st2.top() << endl;
				st1.pop();
				st2.pop();
			}
		}
	}


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}
