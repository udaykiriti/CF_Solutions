#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORk(i, a, b, k) for (int i = (a); i <= (b); i += (k))
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define RFORK(i, a, b, k) for (int i = (a); i >= (b); i -= (k))

void solve()
{
  int n, m, k; cin >> n >> m >> k;
  vector<int> b(n + 1), c(m + 1);

  FOR(i, 1, n)
      cin >> b[i];
  FOR(i, 1, m)
      cin >> c[i];

  int count = 0;
  FOR(i, 1, n)
    FOR(j, 1, m)
      if (b[i] + c[j] <= k)
        count++;
  cout << count << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t ; cin >> t;
  while (t--) solve();
  return 0;
}