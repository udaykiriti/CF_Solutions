/* Problem: Domino piling
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares.
You are allowed to rotate the pieces. You need to place as many dominoes as possible on the board so as to meet the following conditions:
1. Each domino completely covers two squares.
2. No two dominoes overlap.
3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes that can be placed under these restrictions.

Input:
The first line contains two integers M and N (1 ≤ M, N ≤ 16) — board dimensions.

Output:
Output one number — the maximum number of dominoes that can be placed.

Example:
Input:
2 4
Output:
4

Input:
3 3
Output:
4
*/

#include <bits/stdc++.h>
using namespace std;

#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define BYE return 0;

int main()
{
  FastIO;
  int m, n; cin >> m >> n;
  // Calculate the maximum number of dominoes that can fit
  int domino_area = 2;
  cout << (m * n) / domino_area << endl;
  return 0;
}