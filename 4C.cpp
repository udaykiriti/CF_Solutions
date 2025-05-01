#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  unordered_map<string, int> usernames;

  while (n--)
  {
    string name;
    cin >> name;

    if (usernames.count(name) == 0)
    {
      cout << "OK\n";
      usernames[name] = 1;
    }
    else
    {
      string new_name = name + to_string(usernames[name]);
      while (usernames.count(new_name))
      {
        usernames[name]++;
        new_name = name + to_string(usernames[name]);
      }
      cout << new_name << '\n';
      usernames[new_name] = 1;
      usernames[name]++;
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
