#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  string s;
  cin >> n >> s;
  for (int i = 1; i < n; ++i)
  {
    if (s[i] != s[0])
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
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
