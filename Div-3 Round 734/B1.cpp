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
        string s;
        cin >> s;
        int arr[26] = {0};
        int flag = 0;
        for(int i = 0; i < s.size(); i++) {
            arr[s[i] - '\0' - 97]++;
            if(arr[s[i] - '\0' - 97] > 1) flag = 1;
        }
        int r = 0, g = 0;
        if(flag == 0) {
            cout << s.size() / 2 << endl;
            continue;
        }
        else {
            for(int i = 0; i < 26; i++) {
                if(arr[i] > 0) {
                    int cnt = 0;
                    while(arr[i]--) {
                        if(++cnt > 2) break;
                        if(g < r) g++;
                        else r++;
                    }
                }
            }
        }
        if(r == g)
            cout << r << endl;
        else cout << --r << endl;
    }


	//.....
#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " sec\n";
#endif
	return 0;
}
