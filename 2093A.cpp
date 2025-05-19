#include <bits/stdc++.h>
#define endl '\n'
#define EXIT return 0

void FastIO()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
}

void solve()
{
  long k;
  std::cin >> k;
  if (k % 2)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}

int main()
{
  FastIO();
  long t;
  std::cin >> t;
  while (t--)
    solve();
  EXIT;
}
