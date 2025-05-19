#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define EXIT return 0
#define input(x) cin >> x
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void FastIO()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

void solve()
{
  long k;
  input(k);
  if (k % 2)
    YES;
  else
    NO;
}

int main()
{
  FastIO();
  long t;
  input(t);
  while (t--)
    solve();
  EXIT;
}
