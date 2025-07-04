#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define GG return 0

void solve()
{
  string s1, s2; cin >> s1 >> s2;
  if (s1.size() != s2.size()) cout << max(s1.size(), s2.size()) << endl;
  else if (s1 == s2) cout << -1 << endl;
  else cout << s1.size() << endl;
}

int main()
{
  FastIO;
  solve();
  GG;
}