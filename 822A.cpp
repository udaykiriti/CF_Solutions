#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define PRINT(x) cout << x << endl;

void solve()
{
  ll a, b; cin >> a >> b;
  ll A = 1;
  for (ll i = 2; i <= min(a, b); i++)
    A *= i;
  PRINT(A)
}

int main()
{
  fastread();
  solve();
  return 0;
}