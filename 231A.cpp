#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int surity = 0, count = 0, sure;

  for (int i = 0; i < n; i++)
  {
    sure = 0;
    for (int j = 0; j < 3; j++)
    {
      cin >> surity;
      sure += surity;
    }
    if (sure >= 2)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
