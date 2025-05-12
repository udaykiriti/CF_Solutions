#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)     \
    solve();
#define BYE return 0;
#define PRINT(x) cout << x << endl;
void solve()
{
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  x = max(x - a, 0);
  y = max(y - b, 0);

  if (x + y <= c)
    PRINT("YES")
  else
    PRINT("NO")
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  multicase BYE
}