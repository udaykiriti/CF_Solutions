#include <bits/stdc++.h>
using namespace std;
#define SCAN(x) cin >> x
#define PRINT(x) cout << x << endl
#define BYE return 0;
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
  int n, i = 0, a[7];
  SCAN(n);
  FOR(j, 0, 7)
  SCAN(a[j]);

  int t = a[0];
  while (t < n)
  {
    i++;
    i %= 7;
    t += a[i];
  }

  PRINT(i + 1);
  BYE
}