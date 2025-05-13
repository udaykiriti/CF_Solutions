#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define FastIO             \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl '\n'
#define BYE return 0;
#define input1(a) cin >> a;
#define input2(a, b) cin >> a >> b;
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
  FastIO int n, t;
  input2(n, t);
  string s;
  input1(s);

  while (t--)
  {
    for (int i = 0; i < n - 1; ++i)
    {
      if (s[i] == 'B' && s[i + 1] == 'G')
      {
        swap(s[i], s[i + 1]);
        i++;
      }
    }
  }

  cout << s << endl;
  BYE
}