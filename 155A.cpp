#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];

  int count = 0;
  int max = vec[0], min = vec[0];

  for (int i = 1; i < n; i++)
    if (vec[i] > max)
      count++, max = vec[i];
    else if (vec[i] < min)
      count++, min = vec[i];

  cout << count << endl;
  return 0;
}
