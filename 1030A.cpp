#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, r = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> m;
    r |= m;
    if (r == 1)
    {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";
  return 0;
}
