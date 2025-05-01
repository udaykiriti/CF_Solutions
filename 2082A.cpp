#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;
  vector<string> matrix(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> matrix[i];
  }

  vector<int> rowXOR(n, 0), colXOR(m, 0);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      int val = matrix[i][j] - '0';
      rowXOR[i] ^= val;
      colXOR[j] ^= val;
    }
  }

  int oddRows = count(rowXOR.begin(), rowXOR.end(), 1);
  int oddCols = count(colXOR.begin(), colXOR.end(), 1);

  cout << max(oddRows, oddCols) << '\n';
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
