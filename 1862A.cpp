#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define PRINT_YES cout << "YES" << endl
#define PRINT_NO cout << "NO" << endl

int main()
{
  FastIO int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string carpet[n];
    for (int i = 0; i < n; i++)
    {
      cin >> carpet[i];
    }

    string vika = "vika";
    int k = 0;

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (carpet[j][i] == vika[k])
        {
          k++;
          break;
        }
      }
    }

    if (k >= 4)
      PRINT_YES;
    else
      PRINT_NO;
  }

  return 0;
}