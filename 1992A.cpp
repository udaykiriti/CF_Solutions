#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FastIO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORk(i, a, b, k) for (int i = (a); i <= (b); i += (k))
#define RFOR(i, a, b) for (int i = (a); i >= (b); i--)
#define RFORK(i, a, b, k) for (int i = (a); i >= (b); i -= (k))

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> nums = {a, b, c};
  sort(nums.begin(), nums.end());

  FOR(i, 0, 4)
  {
    nums[0]++;
    sort(nums.begin(), nums.end());
  }

  cout << nums[0] * nums[1] * nums[2] << endl;
}

int main()
{
  FastIO();
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
