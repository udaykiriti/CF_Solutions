#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);

void solve()
{
  long long n, k; cin >> n >> k;
  long long minSum = k * k;
  if (n >= minSum && (n - minSum) % 2 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main()
{
  FastIO();
  int t; cin >> t;
  while (t--) solve();
  return 0;
}