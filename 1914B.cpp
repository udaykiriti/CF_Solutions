#include <bits/stdc++.h>
using namespace std;

#define fastio                 \
  ios::sync_with_stdio(false); \
  cin.tie(NULL);
#define testcases \
  int t;          \
  cin >> t;       \
  while (t--)
#define loop(i, a, b) for (long i = (a); i <= (b); ++i)
#define rloop(i, a, b) for (long i = (a); i > (b); --i)
#define endl '\n'

int main()
{
  fastio;

  testcases
  {
    long n, k;
    cin >> n >> k;

    loop(p, 1, k)
    {
      cout << p << " ";
    }
    rloop(p, n, k)
    {
      cout << p << " ";
    }
    cout << endl;
  }

  return 0;
}
