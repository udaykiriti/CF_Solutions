#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)     \
    solve();
#define GG return 0;
void solve()
{
  i64 n;
  cin >> n;

  i64 res = 0;
  while (n)
  {
    res += n;
    n /= 2;
  }

  cout << res << ln;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase GG
}