#include <bits/stdc++.h>
#define BYE return 0;
using namespace std;

#define fastIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define sort(x) sort(x.begin(), x.end())
#define PRINT(x) cout << x << endl;
#define XX break;
#define vector vector<long>
#define scan(x) cin >> x;

int main()
{
  fastIO;
  long n; scan(n);
  vector a(n);
  FOR(p, 0, n) scan(a[p]);
  sort(a);

  string res = "NO";
  FOR(p, 2, n)
  {
    if (a[p - 2] + a[p - 1] > a[p])
    {
      res = "YES";
      XX;
    }
  }
  PRINT(res);
  BYE;
}