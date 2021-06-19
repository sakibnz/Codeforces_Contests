#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x, sum = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            sum += x;
        }
        if(n==sum) cout << "0" << "\n";
        else if (n>sum) cout << "1" << "\n";
        else
            cout << sum - n << "\n";
    }
    return 0;
}
