#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define print(x) cout << x << ln
#define scan(x) cin >> x
#define multicase \
  int t;          \
  scan(t);        \
  while (t--)     \
    solve();

void solve()
{
  long n;
  scan(n);
  vector<long> a(n);
  FOR(i, 0, n)
  scan(a[i]);

  sort(a.rbegin(), a.rend());

  if (a[0] == a.back())
  {
    print("NO");
    return;
  }

  print("YES");
  print(a.back());
  FOR(i, 0, n - 1)
      cout << a[i] << " ";
  cout << ln;
}

int main()
{
  fast_io;
  multicase return 0;
}