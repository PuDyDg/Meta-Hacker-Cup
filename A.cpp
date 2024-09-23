#include "bits/stdc++.h"
#define int long long
using namespace std;

int n, k;
int a[200005];

int sum(int n) {
    return n * (n + 1) / 2;
}
int sum(int l, int r) {

    return sum(r) - sum(l-1);
}
signed main() {

    cin >> n >> k;
        for (int i = 1 ; i <= n ; i++)
        cin >> a[i];
    if (n == 1) {
        cout << sum(max(1LL, a[1] - k+1), a[1]);
        return 0;
    }


    sort(a+1, a+n+1, greater <int> ());

    int T = a[1] - a[2] + 1;
    int res = k / T * a[2];
    res += k / T * sum(a[2]+1, a[1]);
    for (int i = 1 ; i <= k % T ; i++)
        res += a[1] - i + 1;
    cout << res;
    return 0;
}