#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

void solve()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t; cin >> t;
  while (t--)
  {
    int x1, x2, x3; cin >> x1 >> x2 >> x3;
    vector<int> points = {x1, x2, x3};
    sort(points.begin(), points.end());
    int a = points[1];

    int result = abs(a - points[0]) + abs(a - points[1]) + abs(a - points[2]);
    cout << result << endl;
  }
}

int main()
{
  solve();
  return 0;
}