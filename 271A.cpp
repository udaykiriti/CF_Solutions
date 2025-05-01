#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int a, b, c, d;
  while (true)
  {
    n++;
    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
      break;
    }
  }

  cout << n;
  return 0;
}
