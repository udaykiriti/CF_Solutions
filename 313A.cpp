#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  if (n >= 0)
  {
    cout << n << '\n';
  }
  else
  {
    int r1 = n / 10;
    int r2 = (n / 100) * 10 + n % 10;
    cout << max(r1, r2) << '\n';
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
