#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
#define ln "\n"
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define scan(x) cin >> x
#define multicase \
  int t;          \
  scan(t);        \
  while (t--)     \
    solve();

void solve()
{
  i64 n, k;
  scan(n);
  scan(k);

  string s;
  scan(s);

  vector<i64> prefix_sum(n + 1, 0);

  FOR(i, 1, n + 1)
  {
    prefix_sum[i] = prefix_sum[i - 1] + (s[i - 1] == 'W' ? 1 : 0);
  }

  i64 result = LLONG_MAX;

  FOR(i, k, n + 1)
  {
    i64 current = prefix_sum[i] - prefix_sum[i - k];
    result = min(result, current);
  }

  cout << result << ln;
}

int main()
{
  fast_io;
  multicase return 0;
}