#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int a, b, c; cin >> a >> b >> c;
  int result = max({a + b + c,a + (b * c), (a + b) * c,a * b * c,a * (b + c),(a * b) + c});
  cout << result << endl;
  return 0;
}
