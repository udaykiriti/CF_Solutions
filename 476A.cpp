#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORk(i, a, b, k) for (int i = (a); i <= (b); i += (k))
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define RFORK(i, a, b, k) for (int i = (a); i >= (b); i -= (k))

void solve()
{
  int n, m; cin >> n >> m;
  int min_moves = (n + 1) / 2;
  for (int k = min_moves; k <= n; k++)
  {
    if (k % m == 0)
    {
      cout << k << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main()
{
  FastIO();
  solve();
  return 0;
}