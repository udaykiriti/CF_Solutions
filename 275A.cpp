// Problem: 275A - Lights Out
// Link: https://codeforces.com/problemset/problem/275/A
// Description:
// Each light in a 3×3 grid can be toggled. Pressing a light toggles it and its adjacent (up/down/left/right) neighbors.
// Initially all lights are on. Each cell contains the number of times the corresponding light was pressed.
// Output the final state of the grid: 1 if the light is on, 0 if off.

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define RES(i, j) result[i][j]

int main()
{
  int tab[3][3];
  bool result[3][3];

  FOR(i, 0, 3)
  FOR(j, 0, 3)
  RES(i, j) = true;

  FOR(i, 0, 3)
  FOR(j, 0, 3)
  cin >> tab[i][j];

  if (tab[0][0] % 2 != 0)
  {
    RES(0, 0) = !RES(0, 0);
    RES(1, 0) = !RES(1, 0);
    RES(0, 1) = !RES(0, 1);
  }
  if (tab[1][0] % 2 != 0)
  {
    RES(0, 0) = !RES(0, 0);
    RES(1, 0) = !RES(1, 0);
    RES(2, 0) = !RES(2, 0);
    RES(1, 1) = !RES(1, 1);
  }
  if (tab[2][0] % 2 != 0)
  {
    RES(2, 0) = !RES(2, 0);
    RES(2, 1) = !RES(2, 1);
    RES(1, 0) = !RES(1, 0);
  }
  if (tab[0][1] % 2 != 0)
  {
    RES(0, 0) = !RES(0, 0);
    RES(0, 1) = !RES(0, 1);
    RES(1, 1) = !RES(1, 1);
    RES(0, 2) = !RES(0, 2);
  }
  if (tab[1][1] % 2 != 0)
  {
    RES(1, 1) = !RES(1, 1);
    RES(0, 1) = !RES(0, 1);
    RES(2, 1) = !RES(2, 1);
    RES(1, 0) = !RES(1, 0);
    RES(1, 2) = !RES(1, 2);
  }
  if (tab[2][1] % 2 != 0)
  {
    RES(1, 1) = !RES(1, 1);
    RES(2, 0) = !RES(2, 0);
    RES(2, 1) = !RES(2, 1);
    RES(2, 2) = !RES(2, 2);
  }
  if (tab[0][2] % 2 != 0)
  {
    RES(0, 1) = !RES(0, 1);
    RES(0, 2) = !RES(0, 2);
    RES(1, 2) = !RES(1, 2);
  }
  if (tab[1][2] % 2 != 0)
  {
    RES(0, 2) = !RES(0, 2);
    RES(1, 1) = !RES(1, 1);
    RES(1, 2) = !RES(1, 2);
    RES(2, 2) = !RES(2, 2);
  }
  if (tab[2][2] % 2 != 0)
  {
    RES(2, 2) = !RES(2, 2);
    RES(2, 1) = !RES(2, 1);
    RES(1, 2) = !RES(1, 2);
  }

  FOR(i, 0, 3)
  {
    FOR(j, 0, 3)
    {
      cout << (RES(i, j) ? 1 : 0);
    }
    cout << '\n';
  }

  return 0;
}
