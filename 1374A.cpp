#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
  long long x, y, n;
  cin >> x >> y >> n;

  long long m = (n - y) / x;
  long long k = m * x + y;

  cout << k << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}