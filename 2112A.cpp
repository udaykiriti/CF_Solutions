#include <bits/stdc++.h>

void solve()
{
  int a, b, c; scanf("%d %d %d", &a, &b, &c);
  bool d = false;
  for (int e = 1; e <= 100; e++)
    if (e != a)
      if (abs(e - b) < abs(a - b) && abs(e - c) < abs(a - c))
      {
        d = true;
        break;
      }
  printf(d ? "YES\n" : "NO\n");
}

int main()
{
  int f; scanf("%d", &f);
  while (f--) solve();
}