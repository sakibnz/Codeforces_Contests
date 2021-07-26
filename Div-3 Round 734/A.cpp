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
}

int main() {

	clock_t begin = clock();
	file_i_o();
	//.....
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = n / 3;
        int y = x;
        if(n % 3 == 1) x++;
        if(n % 3 == 2) y++;

        cout << x << " " << y << endl;
    }


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " msec\n";
#endif
	return 0;
}
