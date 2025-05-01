#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, h, m, width = 0;
  cin >> n;
  cin >> h;
  for (int i = 0; i < n; i++)
  {
    cin >> m;
    if (m > h)
    {
      width += 2;
    }
    else
    {
      width++;
    }
  }
  cout << width;
  return 0;
}
