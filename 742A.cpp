#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORk(i, a, b, k) for (int i = (a); i <= (b); i += (k))
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define RFORK(i, a, b, k) for (int i = (a); i >= (b); i -= (k))

void solve()
{
  int n; cin >> n;
  if (n == 0)
  {
    cout << 1 << endl;
    return;
  }
  int cycle[] = {8, 4, 2, 6};
  cout << cycle[(n - 1) % 4] << endl;
}

int main()
{
  FastIO();
  solve();
  return 0;
}