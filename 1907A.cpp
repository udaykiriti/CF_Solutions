#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    string pos;
    cin >> pos;
    char col = pos[0];
    char row = pos[1];
    for (char r = '1'; r <= '8'; ++r)
    {
      if (r != row)
        cout << col << r << "\n";
    }
    for (char c = 'a'; c <= 'h'; ++c)
    {
      if (c != col)
        cout << c << row << "\n";
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
