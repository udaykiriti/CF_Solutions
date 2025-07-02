#include <bits/stdc++.h>
using namespace std;

char mirrorChar(char ch)
{
  if (ch == 'p')
    return 'q';
  if (ch == 'q')
    return 'p';
  return 'w';
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t; cin >> t;
  while (t--)
  {
    string a, b = ""; cin >> a;
    reverse(a.begin(), a.end());
    for (char ch : a) b += mirrorChar(ch);
    cout << b << '\n';
  }
  return 0;
}