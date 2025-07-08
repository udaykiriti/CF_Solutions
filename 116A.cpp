
/* Problem: Tram
A tram has `n` stops, and at each stop, some passengers exit the tram, and some enter.
You need to calculate the minimum tram capacity required so that no passenger is left behind at any stop.

Input:
The first line contains a single integer `n` (2 ≤ n ≤ 1000) — the number of stops.
The next `n` lines contain two integers `a` and `b` (0 ≤ a, b ≤ 1000) — the number of passengers that exit and enter the tram at each stop.

Output:
Print a single integer — the minimum tram capacity required so that no passenger is left behind.

Example:
Input:
4
0 3
2 5
4 2
4 0
Output:
6
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
  int n; cin >> n;
  int a, b, maxi = 0, current = 0;
  // Process each stop
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    current -= a;              // Passengers exiting
    current += b;              // Passengers entering
    maxi = max(maxi, current); // Update max capacity
  }
  cout << maxi << endl;
  BYE;
}