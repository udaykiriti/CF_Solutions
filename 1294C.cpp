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
  ll n; cin >> n;
  ll a = -1, b = -1, c = -1;
  for (ll i = 2; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      a = i;
      break;
    }
  }

  if (a == -1)
  {
    cout << "NO" << nline;
    return;
  }

  ll remaining = n / a;
  for (ll j = a + 1; j * j <= remaining; ++j)
  {
    if (remaining % j == 0)
    {
      b = j;
      c = remaining / j;
      if (b != c && c > b)
      {
        cout << "YES" << nline;
        cout << a << " " << b << " " << c << nline;
        return;
      }
    }
  }

  cout << "NO" << nline;
}

int main()
{
  op();
  int tc; cin >> tc;
  while (tc--) solve();
  return 0;
}