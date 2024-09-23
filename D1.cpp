#include "bits/stdc++.h"
#define pii pair <int, int>
#define fi first
#define se second

using namespace std;

const int N = 300005;
int n, G;
int e[N];

signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int test;
    cin >> test;

    for (int t = 1 ; t <= test ; t++) {
        cin >> n >> G;

        for (int i = 1 ; i <= n ; i++)
            cin >> e[i];

        sort(e+1, e+n+1, greater <int> ());
        
        pii res = {1e9, 0};
        for (int i = 1 ; i <= n ; i++) 
            res = min(res, pii(abs(G-e[i]), i));


        cout << "Case #" << t << ": ";
        cout << res.se << " " << res.fi << "\n";


    }
    return 0;
}