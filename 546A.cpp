#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int k, n, w;
  cin >> k;
  cin >> n;
  cin >> w;

  int sum = 0;
  for (int i = 1; i <= w; i++)
  {
    sum += i * k;
  }
  int b = (sum - n) > 0 ? (sum - n) : 0;
  cout << b;
  return 0;
}
