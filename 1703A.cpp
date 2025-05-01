#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  for (char &c : s)
    c = toupper(c);

  if (s == "YES")
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
