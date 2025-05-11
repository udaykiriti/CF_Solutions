#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
#define ln "\n" // Ensure ln is defined as a newline character
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
#define LOOP(i, a, b) for (i64 i = (a); i < (b); i++)
#define CHECK(x) if (x)
#define SKIP continue
#define YES "YES"
#define NO "NO"

void solve()
{
  string s;
  cin >> s;
  char c;
  cin >> c;

  bool res = false;
  LOOP(p, 0, s.size())
  {
    CHECK(s[p] != c)
    SKIP;
    CHECK(p % 2 == 0)
    {
      res = true;
      break;
    }
  }

  cout << (res ? YES : NO) << ln;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase
      GG;
}