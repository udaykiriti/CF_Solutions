#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define print(x) cout << x << "\n"
#define scan(x) cin >> x
#define multicase \
  int t;          \
  scan(t);        \
  while (t--)     \
    solve();

void solve()
{
  int n, k; scan(n); scan(k);
  vector<string> v(n);
  FOR(i, 0, n)
  scan(v[i]);

  vector<string> w(n / k, string(n / k, '0'));
  for (int row = 0; row < n; row += k)
    for (int col = 0; col < n; col += k)
      w[row / k][col / k] = v[row][col];


  FOR(i, 0, w.size())
  print(w[i]);
}

int main()
{
  fast_io;
  multicase return 0;
}