#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define MULTICASES(t) \
  int t;              \
  cin >> t;           \
  while (t--)
#define EXIT return 0;
void solve()
{
  int n, k, q;
  cin >> n >> k >> q;
  int t[n];
  int pd = 0;
  ll ans = 0;

  FOR(i, 0, n)
  {
    cin >> t[i];
    if (t[i] <= q)
      pd++;
    else
      pd = 0;
    ans += max(0, pd - k + 1);
  }

  cout << ans << endl;
}

int main()
{
  MULTICASES(t)
  {
    solve();
  }
  EXIT
}