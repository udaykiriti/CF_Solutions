#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);

void solve()
{
  int n, a, b, c, r; cin >> n >> a >> b;
  c = n - a - 1;
  if (c > b)
    r = b + 1;
  else
    r = c + 1;
  cout << r << endl;
}

int main()
{
  FastIO();
  solve();
  return 0;
}