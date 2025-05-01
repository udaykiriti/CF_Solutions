#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  long long k;
  cin >> n >> k;

  int pos1 = 0, pos2 = 0;
  for (int i = 1; i <= n; ++i)
  {
    long long total = i * (i - 1LL) / 2;
    if (total >= k)
    {
      pos1 = i;
      break;
    }
  }

  long long total_before = (pos1 - 1LL) * (pos1 - 2) / 2;
  long long offset = k - total_before - 1;

  int index1 = n - pos1;
  int index2 = n - offset - 1;

  string result(n, 'a');
  result[index1] = 'b';
  result[index2] = 'b';

  cout << result << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
