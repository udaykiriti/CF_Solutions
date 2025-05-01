#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  long long k;
  cin >> n >> k;

  vector<int> a(n + 1);
  for (int i = 1; i < n; ++i)
  {
    a[i] = i + 1;
  }
  a[n] = 1;

  for (int i = 1; i <= n; ++i)
  {
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
