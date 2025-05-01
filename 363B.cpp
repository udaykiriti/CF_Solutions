#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; ++i)
    cin >> h[i];

  int sum = 0;
  for (int i = 0; i < k; ++i)
    sum += h[i];

  int min_sum = sum, min_index = 0;

  for (int i = k; i < n; ++i)
  {
    sum = sum - h[i - k] + h[i];
    if (sum < min_sum)
    {
      min_sum = sum;
      min_index = i - k + 1;
    }
  }

  cout << min_index + 1 << endl;
  return 0;
}
