// Codeforces Username: Polymath__
// Email: Udaykiriti9@gmail.com
// Problem link: https://codeforces.com/problemset/problem/1526/B
// github link: https://github.com/udaykiriti

/* Problem: I Hate 1111
You are given an integer `n`. You need to determine if it is possible to represent `n` as the sum of some number of 11s and 111s.

Input:
The first line contains a single integer `t` (1 ≤ t ≤ 100) — the number of test cases.
Each of the next `t` lines contains a single integer `n` (1 ≤ n ≤ 10^9).

Output:
For each test case, print "YES" if it is possible to represent `n` as the sum of some number of 11s and 111s, otherwise print "NO".

Example:
Input:
3
33
144
69
Output:
YES
YES
NO
*/

#include <bits/stdc++.h>
using namespace std;

#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define PRINT_YES cout << "YES" << endl
#define PRINT_NO cout << "NO" << endl
#define BYE return 0;

int main() {
  FastIO;

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    bool ok = false;

    // Check if n can be represented as the sum of 11s and 111s
    while (n > 0) {
      if (n % 11 == 0 || n % 111 == 0) {
        ok = true;
        break;
      } else {
        n -= 111;
      }
    }

    // Output the result
    if (ok)
      PRINT_YES;
    else
      PRINT_NO;
  }

  BYE;
}