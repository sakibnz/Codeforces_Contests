#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n+10];
    char ch;
    int don;
    char str[n+10];
    scanf("%s", str);
    for(int i=0; i<n; i++) {
        ch = str[i];
        don = (ch - 'a') + 1;
        if(i==0) a[i] = don;
        else a[i] = a[i-1] + don;
    }


    for(int i=0; i<q; i++) {
        int l, r;
        cin >> l >> r;
        ll sum;
        if(l==1)
            sum = a[r-1];
        else
            sum = a[r-1] - a[l-2];
        cout << sum << "\n";
    }
    return 0;
}
