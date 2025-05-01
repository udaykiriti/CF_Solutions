#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n;
  cin >> k;

  for (int i = 0; i < k; i++)
  {
    if (n % 10 == 0)
    {
      n /= 10;
    }
    else
    {
      n--;
    }
  }
  cout << n;
}
