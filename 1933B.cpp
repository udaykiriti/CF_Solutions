#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INPUT(x) scanf("%lld", &x)
#define INPUT_INT(x) scanf("%d", &x)
#define PRINT(x) printf("%d\n", x)
#define FOR(i, a, b) for (ll i = a; i < b; i++)

int main()
{
  ll t;
  INPUT(t);

  while (t--)
  {
    ll n;
    INPUT(n);

    bool one = false;
    int s = 0;

    FOR(p, 0, n)
    {
      int x;
      INPUT_INT(x);

      if (x % 3 == 1)
        one = true;

      s += x;
      s %= 3;
    }

    if (!one && s % 3 == 1)
      PRINT(2);
    else if (s % 3)
      PRINT(1);
    else
      PRINT(0);
  }

  return 0;
}