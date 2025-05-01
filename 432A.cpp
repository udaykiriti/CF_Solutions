#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;

  int count = 0;

  for (int i = 0; i < n; ++i)
  {
    int participation;
    cin >> participation;

    if (participation <= 5 - k)
    {
      count++;
    }
  }

  cout << count / 3 << endl;

  return 0;
}
