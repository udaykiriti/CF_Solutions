#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast                   \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve()
{
  int n;
  string b;
  cin >> n >> b;

  set<char> chars_set(all(b));
  vector<char> r(all(chars_set));
  sort(all(r));

  map<char, char> decode_map;
  int len = r.size();
  for (int i = 0; i < len; ++i)
    decode_map[r[i]] = r[len - 1 - i];

  for (char c : b)
    cout << decode_map[c];
  cout << "\n";
}

int32_t main()
{
  fast int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
