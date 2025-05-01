#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b;
    cin >> a >> b;
    long long total = a + b;
    long long teams = min({a, b, total / 4});
    cout << teams << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}
