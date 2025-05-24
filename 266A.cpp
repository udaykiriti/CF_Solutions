/*Problem Number: 266A
Contest: Codeforces Round 163 (Div. 2)
Problem Link: https://codeforces.com/problemset/problem/266/A
codeforces : Polymath__
github link : https://github.com/udaykiriti
*/

/*Problem: A. Stones on the Table
Source: Codeforces Round 163 (Div. 2)

There are n stones on the table in a row, each of them can be red, green or blue.
Count the minimum number of stones to take from the table so that any two
neighboring stones had different colors. Stones are neighboring if there are no
other stones between them.

Input:
- The first line contains an integer n (1 ≤ n ≤ 50) — the number of stones.
- The second line contains a string s of length n, composed of 'R', 'G', and 'B'.

Output:
- Print a single integer — the minimum number of stones to remove.

Examples:
Input:
3
RRG
Output:
1

Input:
5
RRRRR
Output:
4

Input:
4
BRBG
Output:
0
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define READ_INT(x) \
  int x;            \
  cin >> x;
#define READ_STRING(s) \
  string s;            \
  cin >> s;
#define IF_EQUAL(a, b) if (a == b)
#define PRINT(x) cout << x << endl;

int main()
{
  FAST_IO;

  READ_INT(n);
  READ_STRING(s);

  int count = 0;
  FOR(i, 0, n - 1)
  {
    IF_EQUAL(s[i], s[i + 1])
    count++;
  }

  PRINT(count);

  return 0;
}
