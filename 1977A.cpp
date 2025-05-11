#include <bits/stdc++.h>
using namespace std;

#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define ln "\n"
#define pb push_back
#define sz(x) int((x).size())
#define All(x) (x).begin(), (x).end())
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)     \
    solve();

using i64 = long long;
#define GG return 0;
#define YES cout << "YES" << ln
#define NO cout << "NO" << ln
void solve()
{
  int n, m;
  cin >> n >> m;

  if (m <= n && (n - m) % 2 == 0)
    YES;
  else
    NO;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase GG
}