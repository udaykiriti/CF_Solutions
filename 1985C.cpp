#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr); cout.tie(NULL)
#define FOR(i, a, b) for (i64 i = (a); i < (b); i++)

void solve() {
    i64 n; cin >> n;
    i64 cs = 0, mx = -1, cnt = 0;
    FOR(p, 0, n) {
        i64 x; cin >> x;
        mx = max(mx, x);
        cs += x;
        cnt += (cs == 2 * mx);
    }
    cout<<(cnt);
}

int main() {
    stop_sync; untie_ios;
    int t; cin>>t;
    while(t--) solve();
    return 0;
}