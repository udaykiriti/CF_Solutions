#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int x;
  cin >> x;

  int maxVal = 0, bestY = 1;
  for (int y = 1; y < x; ++y)
  {
    int g = __gcd(x, y);
    if (g + y > maxVal)
    {
      maxVal = g + y;
      bestY = y;
    }
  }

  cout << bestY << '\n';
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
