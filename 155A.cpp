

/* Problem: I_love_%username%
Petya loves competitive programming and participates in contests regularly. His friend Vasya admires Petya's progress and keeps track of his performance. After each contest, Vasya writes down Petya's score. Over time, Vasya noticed that Petya's performance is sometimes extraordinary, breaking his previous records (either the highest or the lowest score).

Your task is to count how many times Petya breaks his records.

Input:
The first line contains a single integer n (1 ≤ n ≤ 1000) — the number of contests.
The second line contains n integers a1, a2, ..., an (0 ≤ ai ≤ 10000) — the scores Petya achieved in each contest.

Output:
Print a single integer — the number of times Petya breaks his records.

Example:
Input:
4
100 50 200 150
Output:
2

Input:
10
4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
Output:
4
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define BYE return 0;

int main()
{
  FastIO;

  int n;
  cin >> n;
  vector<int> vec(n);

  // Read the scores
  FOR(i, 0, n)
  cin >> vec[i];

  int count = 0;
  int max_score = vec[0], min_score = vec[0];

  // Count the number of record-breaking performances
  FOR(i, 1, n)
  {
    if (vec[i] > max_score)
    {
      count++;
      max_score = vec[i];
    }
    else if (vec[i] < min_score)
    {
      count++;
      min_score = vec[i];
    }
  }

  cout << count << endl;

  BYE;
}