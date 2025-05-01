#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(int a, int b, int c, int d)
{
  return (a < b && c < d && a < c && b < d);
}

void solve()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  for (int i = 0; i < 4; ++i)
  {
    if (isBeautiful(a, b, c, d))
    {
      cout << "YES\n";
      return;
    }
    tie(a, b, d, c) = make_tuple(c, a, b, d);
  }

  cout << "NO\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
