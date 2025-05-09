#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define BYE return 0;

typedef long long ll;

#define FastIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)
#define all(x) x.begin(), x.end()

void solve()
{
  ll n;
  cin >> n;
  string s;
  cin >> s;

  ll no_of_dots = 0;
  for (char c : s)
  {
    if (c == '.')
    {
      no_of_dots++;
    }
  }

  ll max_dots = 0, curr_dots = 0;
  for (char c : s)
  {
    if (c == '.')
    {
      curr_dots++;
    }
    else
    {
      max_dots = max(max_dots, curr_dots);
      curr_dots = 0;
    }
  }
  max_dots = max(max_dots, curr_dots);

  if (max_dots >= 3)
    cout << 2 << nl;

  else
    cout << no_of_dots << nl;
}

int main()
{
  FastIO multicase
  {
    solve();
  }
  BYE
}