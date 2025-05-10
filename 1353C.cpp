#include <bits/stdc++.h>
using namespace std;

#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define ln "\n"
#define pb push_back
#define sz(x) int((x).size())
#define All(x) (x).begin(), (x).end()
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)

using i64 = long long;
#define BYE return 0;

void solve()
{
  i64 n;
  cin >> n;
  n /= 2;
  i64 res = 8 * n * (n + 1) * (2 * n + 1) / 6;
  cout << res << ln;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase
  {
    solve();
  }
  BYE
}