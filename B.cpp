#include "bits/stdc++.h"

using namespace std;

signed main() {


    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int test;
    cin >> test;        
    cout << setprecision(6) << fixed;
    for (int _ = 1 ; _ <= test ; _++) {
        double n, p;
        cin >> n >> p;
        p /= 100;
        
        cout << "Case #" << _ << ": ";
        cout << (pow(p, (n-1)/n) - p) * 100 << "\n";
    }
    return 0;
}