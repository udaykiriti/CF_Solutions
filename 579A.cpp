#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define debug(n) cout << (n) << endl;
const ll INF = 2e18 + 99;

void Fast_io(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  cout.tie(0);
}

int main(void)
{
  Fast_io();
  int n; cin >> n;
  int res = __builtin_popcount(n);
  cout << res << endl;
}
