#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)

void solve() {
    string a, b, c; cin >> a >> b >> c;
    cout<<(a[0] << b[0] << c[0]);
}

int main() {
    stop_sync; untie_ios;
    int t; cin>>t;
    while(t--) solve();
    return 0;
}