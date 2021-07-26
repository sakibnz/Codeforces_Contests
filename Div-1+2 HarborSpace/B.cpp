///TLE Solution

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
        int arr[n][5];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 5; j++) {
                cin >> arr[i][j];
            }
        }
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        int cnt[n] = {0}, result = -1, pos, flag = 1;
        for(int i = 0; i < n - 1; i++) {
            for(int k = i+1; k < n; k++) {
                int ct1 = 0, ct2 = 0;
                for(int j = 0; j < 5; j++) {
                    if(arr[i][j] < arr[k][j]) ct1++;
                    else ct2++;
                }
                if(ct1 > ct2) cnt[i]++;
                else if(ct2 > ct1) cnt[k]++;
            }
        }
        int mx = 1;
        for(int i = 1; i < n; i++) {
            if(cnt[i] > cnt[i-1])
                mx = i + 1;
            else if(cnt[i] == cnt[i-1]) flag++;
        }
        if(flag == n) cout << "-1" << endl;
        else cout << mx << endl;

    }

	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}
