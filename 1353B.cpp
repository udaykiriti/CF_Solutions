#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < n; ++i) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<>());
  for (int i = 0; i < k; ++i)
    if (a[i] < b[i])
      swap(a[i], b[i]);
    else
      break;
  int sum = 0;
  for (int num : a)
    sum += num;
  cout << sum << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while (t--) solve();
  return 0;
}