#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n; cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  long long sum = 0;
  int current = a[0];

  for (int i = 1; i < n; ++i)
  {
    if ((a[i] > 0 && current > 0) || (a[i] < 0 && current < 0))
    {
      current = max(current, a[i]);
    }
    else
    {
      sum += current;
      current = a[i];
    }
  }

  sum += current;
  cout << sum << "\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}
