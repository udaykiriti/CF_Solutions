#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define multicase \
    int t;        \
    cin >> t;     \
    while (t--) { \
        solve();  \
    }
#define GG return 0;
#define PRINT(x) cout << x << ln

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    PRINT(a[0] << b[0] << c[0]);
}

int main() {
    stop_sync;
    untie_ios;
    multicase
    GG;
}