#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n; cin >> n;
  vector<int> notes(n);
  for (int i = 0; i < n; ++i) cin >> notes[i];

  for (int i = 1; i < n; ++i)
  {
    int diff = abs(notes[i] - notes[i - 1]);
    if (diff != 5 && diff != 7)
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(NULL);
  int t; cin >> t;
  while (t--) solve();
  return 0;
}