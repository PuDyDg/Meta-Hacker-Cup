#include "bits/stdc++.h"
#define int long long
using namespace std;

signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int test;
    cin >> test;
    for (int num = 1 ; num <= test ; num++) {
        int n, k, mi = 1e9;
        cin >> n >> k;
        for (int i = 1 ; i <= n ; i++) {
            int a;
            cin >> a;
            mi = min(mi, a);
        }
        cout << "Case #" << num << ": "; 
        mi *= max(0LL, (n-2) * 2) + 1;
        if (mi > k) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
