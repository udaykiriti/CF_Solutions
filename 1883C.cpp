#include <iostream>
#define INPUT2(x, y) cin >> x >> y
#define INPUT(x) cin >> x
#define PRINT(x) cout << x << endl
#define PRINT_ZERO cout << "0" << endl
#define PRINT_ONE cout << "1" << endl
#define PRINT_TWO cout << "2" << endl
#define FOR(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{
  long t;
  cin >> t;

  while (t--)
  {
    int n, k;
    INPUT2(n, k);

    int md = 0, even = 0;
    bool div = false;

    FOR(p, 0, n)
    {
      int x;
      INPUT(x);
      x %= k;

      if (x)
      {
        md = max(md, x);
      }
      else
      {
        div = true;
      }

      if (x == 2)
      {
        ++even;
      }
    }

    if (div)
    {
      PRINT_ZERO;
    }
    else if (k == 4)
    {
      if (even >= 2)
      {
        PRINT_ZERO;
      }
      else if (even >= 1 || md == 3)
      {
        PRINT_ONE;
      }
      else
      {
        PRINT_TWO;
      }
    }
    else
    {
      PRINT(k - md);
    }
  }

  return 0;
}