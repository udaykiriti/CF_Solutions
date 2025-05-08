#include <bits\stdc++.h>
using namespace std;
#define endl '\n'
#define IO()                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
int main(int argc, char const *argv[])
{
  IO()
  string s, t;
  int c = 0;
  cin >> s >> t;
  for (int i = 0; i < t.length(); i++)
    if (s[c] == t[i])
      c++;

  cout << c + 1;
}