#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int &x : vec)
    cin >> x;

  map<int, long long> freq;
  for (int i = 0; i < n; ++i)
  {
    int key = vec[i] - i;
    freq[key]++;
  }

  long long res = 0;
  for (auto &[key, count] : freq)
  {
    res += count * (count - 1) / 2;
  }

  cout << res << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
