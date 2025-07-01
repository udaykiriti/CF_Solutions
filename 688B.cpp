#include <bits/stdc++.h>
using namespace std;
#define BYE return 0;
#define reverse(x) reverse(x.begin(), x.end())
#define SCAN(x) cin >> x
#define PRINT(x) cout << x
int main()
{
  string s; SCAN(s);
  string s2 = s;
  reverse(s2);
  string s3 = s + s2;
  PRINT(s3);
  BYE
}