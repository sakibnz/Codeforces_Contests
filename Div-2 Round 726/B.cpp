#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;

        if(n==1) {
            if(y==1)
                printf("%d %lld %d %lld\n", 1, m, 1, m);
            else if(y==m)
                printf("%d %d %d %d\n", 1, 1, 1, 1);
            else
                printf("%d %d %d %lld\n", 1, 1, 1, m);
        }
        else if(m==1) {
            if(x==1)
                printf("%lld %lld %lld %lld\n", n, m, n, m);
            else if(x==n)
                printf("%d %d %d %d\n", 1, 1, 1, 1);
            else
                printf("%lld %lld %d %lld\n", n, m, 1, m);
        }
        else if(x==1)
            printf("%lld %d %lld %lld\n", n, 1, n, m);
        else if(x>1 && x<n)
            printf("%lld %d %d %lld\n", n, 1, 1, m);
        else
            printf("%d %d %d %lld\n", 1, 1, 1, m);
    }
    return 0;
}
