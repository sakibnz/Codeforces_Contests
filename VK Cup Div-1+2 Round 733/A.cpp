#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int max = -1;
        for (int i = 0; i < s.size(); i++) {
            if (max < (s[i] - '0')) max = s[i] - '0';
        }
        if (max == 0 || max == 1)
            cout << 1 << endl;
        else
            cout << max << endl;
    }
    return 0;
}
