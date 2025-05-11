#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define pb push_back
#define sz(x) int((x).size())
#define All(x) (x).begin(), (x).end()
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)     \
  {               \
    solve();      \
  }
#define GG return 0;
#define PRINT(x) cout << x << ln
#define FOR(i, a, b) for (i64 i = (a); i < (b); i++)

void solve()
{
  i64 n;
  cin >> n;

  i64 cs = 0, mx = -1, cnt = 0;
  FOR(p, 0, n)
  {
    i64 x;
    cin >> x;
    mx = max(mx, x);
    cs += x;
    cnt += (cs == 2 * mx);
  }

  PRINT(cnt);
}

int main()
{
  stop_sync;
  untie_ios;
  multicase
      GG;
}