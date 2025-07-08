#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        long long n, res = 1;
        cin >> n;
        while (n >= 4) n /= 4, res *= 2;
        cout << res << '\n';
    }
}