#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k;
    cin >> n >> k;
    long long full_blocks = (k - 1) / (n - 1);
    long long result = k + full_blocks;
    cout << result << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
