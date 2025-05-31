

/*
Problem: A. Next Round
Contest: VK Cup 2012 Qualification Round 1
Link: https://codeforces.com/contest/158/problem/A

Description:
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input:
The first line contains two integers n and k (1 ≤ k ≤ n ≤ 50).
The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100),
where ai is the score earned by the participant who got the i-th place.
The sequence is non-increasing.

Output:
Output the number of participants who advance to the next round.

Example:
Input:
8 5
10 9 8 7 7 7 5 5

Output:
6
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define FastIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);

#define input1(x) cin >> x
#define input2(x, y) cin >> x >> y
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define output1(x) cout << x << endl

int main()
{
  FastIO int n, k;
  input2(n, k);

  vector<int> scores(n);
  FOR(i, 0, n)
  {
    input1(scores[i]);
  }

  int threshold = scores[k - 1];
  int count = 0;

  FOR(i, 0, n)
  {
    if (scores[i] >= threshold && scores[i] > 0)
      ++count;
  }

  output1(count);
  return 0;
}
