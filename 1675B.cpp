#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define read(v)     \
  for (auto &x : v) \
    cin >> x;
#define all(x) begin(x), end(x)

void test()
{
  int n;
  cin >> n;
  vector<ll> a(n);
  read(a)

      if (n == 1)
  {
    cout << "0\n";
    return;
  }

  ll ops = 0;
  for (int i = n - 2; i >= 0; --i)
  {
    while (a[i] >= a[i + 1] && a[i] > 0)
      a[i] /= 2, ++ops;
    if (a[i] >= a[i + 1])
    {
      cout << "-1\n";
      return;
    }
  }

  cout << ops << '\n';
}

int main()
{
  fast_io int tc;
  cin >> tc;
  while (tc--)
    test();
  return 0;
}
