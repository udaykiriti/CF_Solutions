#include <bits/stdc++.h>
using namespace std;
#define BYE return 0
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n; cin >> n;
  string s; cin >> s;
  int j = 2;
  for (int i = 0; i < n;)
  {
    cout << s.at(i);
    i = i + j;
    j++;
  }
  cout << endl;
  BYE;
}