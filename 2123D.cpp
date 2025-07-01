#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec std::vector
#define pii std::pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes std::cout << "YES\n";
#define m1 std::cout << "-1\n";
#define no std::cout << "NO\n";

typedef int64_t ll;
typedef unsigned long long ull;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;
using namespace std;

void solve() {
    int n; ll k; cin >> n >> k;
    string s; cin >> s;
    int ones = 0;
    for (char c : s) 
        if (c == '1') 
            ones++;

    if (ones <= k) {
        cout << "Alice" << endl;
        return;
    }
    bool has_k_zeros = false;
    int zero_run = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            zero_run++;
        } else {
            zero_run = 0;
        }
        if (zero_run >= k) {
            has_k_zeros = true;
            break;
        }
    }

    if (has_k_zeros || (2 * k <= n)) 
        cout << "Bob" << endl;
    else 
        cout << "Alice" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}