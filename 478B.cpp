#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
#define fastio                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

long long int pairs(long long int n)
{
  return n * (n - 1) / 2;
}

int main()
{
  fastio;
  long long int n, m; cin >> n >> m;
  long long int a(n / m), b(n % m);
  long long int min = pairs(a) * (m - b) + pairs(a + 1) * b;
  long long int max = pairs(n - m + 1);
  cout << min << " " << max << endl;
  return 0;
}