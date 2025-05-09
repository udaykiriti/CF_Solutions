#include <bits/stdc++.h>
using namespace std;
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define ll long long
#define endl '\n'
#define BYE return 0;
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)

void solve()
{
  ll a, b;
  cin >> a >> b;

  if (a == 0)
    cout << 1 << endl;
  else
    cout << a * 1 + b * 2 + 1 << endl;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase solve();
  BYE
}