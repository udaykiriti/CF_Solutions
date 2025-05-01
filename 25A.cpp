#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> nums(n);

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  int even_count = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] % 2 == 0)
    {
      even_count++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if ((even_count > 1 && nums[i] % 2 != 0) || (even_count == 1 && nums[i] % 2 == 0))
    {
      cout << i + 1 << endl;
      break;
    }
  }

  return 0;
}
