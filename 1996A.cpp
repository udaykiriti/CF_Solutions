#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

void solve()
{
  int n; cin >> n;
  int cows = n / 4;
  if (n % 4 == 2)
    cout << cows + 1 << "\n";
  else
    cout << cows << "\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}