#include <bits/stdc++.h>
using namespace std;

const char nl = '\n';

typedef long long ll;

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define multicase       \
  int NoOfTestCase = 1; \
  cin >> NoOfTestCase;  \
  for (int testcaseno = 1; testcaseno <= NoOfTestCase; testcaseno++)

int main()
{
  fastio multicase
  {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    if (is_sorted(v.begin(), v.end()))
    {
      cout << "YES" << nl;
      continue;
    }

    if (k == 1)
    {
      cout << "NO" << nl;
      continue;
    }

    cout << "YES" << nl;
  }

  return 0;
}
