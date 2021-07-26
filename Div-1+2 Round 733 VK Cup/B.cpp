#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int h, w;
        cin >> h >> w;

        for(int i = 1; i <= h; i++) {
            for(int j = 1; j <= w; j++) {
                if(i == 1 || i == h) {
                    cout << j % 2;
                }
                else if(h % 2 == 0) {
                    if((h/2) % 2 == 0) {
                        if(i == h/2 || i == (h/2 + 1))
                            cout << 0;
                        else if((i % 2 == 0) && (i < (h/2))) cout << 0;
                        else if(i% 2 == 1 && i > h/2) cout << 0;
                        else {
                            if(j == 1 || j == w) cout << 1;
                            else cout << 0;
                        }
                    }
                    else {
                        if(i == (h/2 + 1) || i == (h/2) + 2)
                            cout << 0;
                        else if((i % 2 == 0) && (i < (h/2))) cout << 0;
                        else if(i% 2 == 1 && i > h/2) cout << 0;
                        else {
                            if(j == 1 || j == w) cout << 1;
                            else cout << 0;
                        }
                    }
                }
                else {
                    if(i % 2 == 0) cout << 0;
                    else {
                        if(j == 1 || j == w) cout << 1;
                        else cout << 0;
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
