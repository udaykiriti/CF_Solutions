#include <bits/stdc++.h>
using namespace std;

void solve()
{

  int n;
  cin >> n;
  vector<long long> b(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> b[i];
  }

  auto minmax = minmax_element(b.begin(), b.end());
  long long diff = *minmax.second - *minmax.first;

  if (diff == 0)
  {
    long long cnt = n;
    cout << 0 << " " << cnt * (cnt - 1) / 2 << '\n';
    return;
  }

  long long cnt_min = count(b.begin(), b.end(), *minmax.first);
  long long cnt_max = count(b.begin(), b.end(), *minmax.second);

  cout << diff << " " << cnt_min * cnt_max << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
