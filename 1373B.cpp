#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORk(i, a, b, k) for (int i = (a); i <= (b); i += (k))
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define RFORK(i, a, b, k) for (int i = (a); i >= (b); i -= (k))

void solve()
{
  int one = 0, zero = 0;
  string s; cin >> s;
  int n = s.length();
  FOR ( i ,0, n)
  {
    if (s[i] == '1')
      one++;
    else
      zero++;
  }
  int turn = min(zero, one);
  if (turn == 0 || turn % 2 == 0)
    cout << "NET\n";
  else
    cout << "DA\n";
}

int main()
{
  FastIO();
  int t; cin >> t;
  while (t--) solve();
  return 0;
}