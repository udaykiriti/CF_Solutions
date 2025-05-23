#include <bits/stdc++.h>
using namespace std;
#define FastIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define int long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define pb push_back
#define sz(x) (int)(x).size()
#define PRINT(x) cout << x << endl

// Problem-solving function
void solve()
{
  string n;
  cin >> n;

  // Case 1: Last digit is even -> already even
  if ((n.back() - '0') % 2 == 0)
  {
    PRINT(0);
    return;
  }

  // Case 2: First digit is even -> 1 move needed
  if ((n[0] - '0') % 2 == 0)
  {
    PRINT(1);
    return;
  }

  // Case 3: Check if any other digit is even
  for (int i = 1; i < sz(n) - 1; i++)
  {
    if ((n[i] - '0') % 2 == 0)
    {
      PRINT(2);
      return;
    }
  }

  // Case 4: No even digit found
  PRINT(-1);
}

// Main function
int32_t main()
{
  FastIO;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
