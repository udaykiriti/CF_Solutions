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
void solve()
{
  i64 n, k; cin >> n >> k;

  i64 total = 0, mx = 0;
  for (i64 p = 0; p < k; p++)
  {
    i64 x;
    cin >> x;
    mx = max(mx, x);
    total += (2 * x - 1);
  }
  total -= (2 * mx - 1);
  cout << total << ln;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase
    solve();
  return 0;
}