#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
#define ln "\n"
#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)     \
  {               \
    solve();      \
  }
#define GG return 0;
#define PRINT(x) cout << x << ln

void solve()
{
  long n;
  cin >> n;
  string s;
  cin >> s;

  long idx = 0;
  while (idx < n)
  {
    char ch = s[idx];
    cout << ch;
    ++idx;
    while (idx < n && s[idx] != ch)
    {
      ++idx;
    }
    ++idx;
  }

  cout << ln;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase
      GG;
}