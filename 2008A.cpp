#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline '\n'
#define op()                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    cout << (((a % 2) || (b % 2 && a < 2)) ? "NO" : "YES") << nline;
  }
}

int main()
{
  op();
  solve();
  return 0;
}