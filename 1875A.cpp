// Jellyfish and Undertale
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FASTIO             \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl '\n'
#define input1(a) cin >> a
#define input2(a, b) cin >> a >> b
#define input3(a, b, c) cin >> a >> b >> c
#define EXIT return 0
#define FOR(i, a, b) for (int i = a; i < b; i++)

void solve()
{
  int a, b, n, x;
  input3(a, b, n);
  int sum = b;
  FOR(i, 0, n)
  {
    input1(x);
    sum += min(x, a - 1);
  }
  cout << sum << endl;
}

int32_t main(void)
{
  FASTIO
  int t;
  input1(t);
  while (t--)
    solve();
  EXIT;
}