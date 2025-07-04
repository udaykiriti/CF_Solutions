#include <bits/stdc++.h>
using namespace std;

#define stop_sync ios::sync_with_stdio(false)
#define untie_ios cin.tie(nullptr)
#define ln "\n"
#define pb push_back
#define sz(x) int((x).size())
#define All(x) (x).begin(), (x).end()
#define multicase \
  int t;          \
  cin >> t;       \
  while (t--)

using i64 = long long;
#define GG return 0;

void solve()
{
  i64 n; cin >> n;
  map<i64, i64> freq;
  i64 maxFreq = 0;
  for (i64 i = 0; i < n; i++)
  {
    i64 a; cin >> a;
    freq[a]++;
    maxFreq = max(maxFreq, freq[a]);
  }

  i64 distinct = freq.size();
  i64 result = 0;
  if (distinct == maxFreq) result = distinct - 1;
  else result = min(distinct, maxFreq);
  cout << result << ln;
}

int main()
{
  stop_sync;
  untie_ios;
  multicase
  {
    solve();
  }
  GG
}