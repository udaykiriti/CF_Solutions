#include <bits/stdc++.h>
using namespace std;

void solve()
{
  long long n, k;
  cin >> n >> k;
  long long y_limit = min(k, n / k + 1);
  for (long long y = 0; y <= y_limit; ++y)
  {
    long long rem = n - k * y;
    if (rem >= 0 && rem % 2 == 0)
    {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
