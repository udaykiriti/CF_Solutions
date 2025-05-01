#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, t;
  cin >> n >> t;
  int a[n - 1];
  for (int i = 0; i < n - 1; i++)
    cin >> a[i];
  int current = 1;
  while (current < t)
    current += a[current - 1];

  if (current == t)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
