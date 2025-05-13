#include <bits/stdc++.h>
using namespace std;
#define BYE return 0;
int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int j = 2;
  for (int i = 0; i < n;)
  {
    cout << s.at(i);
    i = i + j;
    j++;
  }
  cout << endl;
  BYE
}