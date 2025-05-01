#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  int cost1 = n * a;
  int cost2 = ((n + m - 1) / m) * b;
  int cost3 = (n / m) * b + (n % m) * a;

  int result = min({cost1, cost2, cost3});

  cout << result << endl;
  return 0;
}
