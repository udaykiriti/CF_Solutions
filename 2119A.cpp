#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define TC int _t; cin >> _t; while (_t--)
#define OUT(x) cout << (x) << '\n'

void solve() {
    int p, q, u, v; cin >> p >> q >> u >> v;
    if (p == q) {
        OUT(0);
    } else if (p > q) {
        OUT((p % 2 == 1 && q == p - 1) ? v : -1);
    } else {
        int d = q - p;
        int m = (d + (p % 2)) / 2;
        int n = d - m;
        OUT(m * u + n * min(u, v));
    }
}

int main() {
    FAST_IO;
    TC {
        solve();
    }
    return 0;
}