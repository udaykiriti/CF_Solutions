#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)

void solve()
{
  int n, k; cin >> n >> k;
  vector<int> gold(n);
  FOR(i, 0, n - 1)
    cin >> gold[i];

  int robinGold = 0;
  int count = 0;

  FOR(i, 0, n - 1)
  {
    if (gold[i] >= k)
    {
      robinGold += gold[i];
    }
    else if (gold[i] == 0 && robinGold > 0)
    {
      robinGold--;
      count++;
    }
  }
  cout << count << endl;
}

int main()
{
  FastIO();
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}