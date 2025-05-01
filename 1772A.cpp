#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    cout << a + b << "\n";
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
