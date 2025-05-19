// Codeforces Username: Polymath__
// Problem link:https://codeforces.com/problemset/problem/4/A
// github link: https://github.com/udaykiriti

/*Problem: Watermelon
One hot summer day Pete and his friend Billy decided to buy a watermelon.
They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed,
and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry,
however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way
that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal.
The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out,
if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input:
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output:
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos;
and NO in the opposite case.

Example:
Input:
8
Output:
YES
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FOR_REV(i, a, b) for (ll i = a; i >= b; i--)
#define PRINT_YES cout << "YES" << endl
#define PRINT_NO cout << "NO" << endl
#define INPUT(x) cin >> x;
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define BYE return 0;

int main()
{
  FastIO int w;
  INPUT(w);

  // Check if the weight of the watermelon is even and greater than 2
  // Explanation:
  // 1. `w % 2 == 0`: This checks if the weight `w` is even.
  // 2. `w > 2`: This ensures that the watermelon can be divided into two parts,
  //    each with a positive even weight (e.g., 2 + 2, 4 + 4, etc.).
  // If both conditions are true, print "YES". Otherwise, print "NO".
  if (w % 2 == 0 && w > 2)
    PRINT_YES;
  else
    PRINT_NO;

  BYE
}
