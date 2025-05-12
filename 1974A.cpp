#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define print(x) cout << x << ln
#define scan(x) cin >> x
#define multicase \
  int t;          \
  scan(t);        \
  while (t--)     \
    solve();

void solve()
{
  long x, y;
  scan(x);
  scan(y);

  long screens = (y + 1) / 2;
  x -= (15 * screens - 4 * y);
  x = max(x, 0L);
  screens += (x + 14) / 15;

  print(screens);
}

int main()
{
  fast_io;
  multicase return 0;
}