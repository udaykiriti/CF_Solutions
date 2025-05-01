#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
  int a, b;
  cin >> a >> b;
  int diff = abs(a - b);
  int moves = diff / 10 + (diff % 10 != 0);
  cout << moves << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
