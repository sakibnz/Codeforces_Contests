#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[60], sum = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(n==sum) cout << "0" << "\n";
        else if (n>sum) cout << "1" << "\n";
        else
            cout << sum - n << "\n";
    }
    return 0;
}
