#include <bits/stdc++.h>
using namespace std;
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);            \
  cout.tie(nullptr);

void solve()
{

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  int maxBlank = 0, current = 0;
  for (int i = 0; i < n; ++i)
  {
    if (a[i] == 0)
    {
      current++;
      maxBlank = max(maxBlank, current);
    }
    else
    {
      current = 0;
    }
  }
  cout << maxBlank << '\n';
}

int main()
{
  fast_io int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
