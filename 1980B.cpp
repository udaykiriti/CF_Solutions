#include <bits/stdc++.h>
using namespace std;

#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define ln "\n"
#define pb push_back
#define sz(x) int((x).size())
#define All(x) (x).begin(), (x).end()
#define multicase \
    int t;        \
    cin >> t;     \
    while (t--)

using i64 = long long;

void solve() {
    i64 n, f, k;
    cin >> n >> f >> k;
    vector<i64> v(n);
    --f;

    for (i64 p = 0; p < n; p++) {
        cin >> v[p];
    }

    i64 scnt = 0, bcnt = 0, cnt = 0;
    for (i64 p = 0; p < n; p++) {
        if (v[p] > v[f])
            ++bcnt;
        else if (v[p] == v[f])
            ++cnt;
        else if (v[p] < v[f])
            ++scnt;
    }

    if (k <= bcnt)
        cout << "NO" << ln;
    else if (k >= bcnt + cnt)
        cout << "YES" << ln;
    else
        cout << "MAYBE" << ln;
}

int main() {
    stop_sync;
    untie_ios;
    multicase {
        solve();
    }
    return 0;
}